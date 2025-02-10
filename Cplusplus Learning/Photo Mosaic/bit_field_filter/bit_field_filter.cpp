#include "bit_field_filter.h"

void BitFieldFilter::zeroPadArray(const std::vector<std::vector<int>>& original, std::vector<std::vector<int>>& padded, int filsize) {
    int padSize = filsize / 2; //填充後的大小(因為要左右填充，所以要除以二)
    int originalRows = original.size(); //num of row
    int originalCols = original[0].size(); //num of column
    int paddedRows = originalRows + 2 * padSize;
    int paddedCols = originalCols + 2 * padSize;

    padded.assign(paddedRows, std::vector<int>(paddedCols, 0));
    for (int i = 0; i < originalRows; i++) {
        for (int j = 0; j < originalCols; j++) {
            padded[i + padSize][j + padSize] = original[i][j];
        }
    }
}

void BitFieldFilter::ApplyBoxFilter(GrayImage &src, GrayImage &dst, int ksize) {
    int rows = src.get_height();
    int cols = src.get_width();
    std::vector<std::vector<int>> padded;
    std::vector<std::vector<int>> original(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            original[i][j] = src.get_pixel(i, j);
        }
    }
    zeroPadArray(original, padded, ksize);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int sum = 0;
            for (int ki = -ksize / 2; ki <= ksize / 2; ki++) {
                for (int kj = -ksize / 2; kj <= ksize / 2; kj++) {
                    sum += padded[i + ki + ksize / 2][j + kj + ksize / 2];
                }
            }
            dst.set_pixel(i, j, sum / (ksize * ksize));
        }
    }
}

void BitFieldFilter::ApplyIdentifyFilter(GrayImage &src, GrayImage &dst) {
    int rows = src.get_height();
    int cols = src.get_width();
    std::vector<std::vector<int>> padded;
    std::vector<std::vector<int>> original(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            original[i][j] = src.get_pixel(i, j);
        }
    }
    zeroPadArray(original, padded, 3);

    int filter[3][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    for (int i = 1; i < rows + 1; i++) {
        for (int j = 1; j < cols + 1; j++) {
            int sum = 0;
            for (int ki = -1; ki <= 1; ki++) {
                for (int kj = -1; kj <= 1; kj++) {
                    sum += padded[i + ki][j + kj] * filter[ki + 1][kj + 1];
                }
            }
            dst.set_pixel(i - 1, j - 1, sum);
        }
    }
}

void BitFieldFilter::ApplyMedianFilter(GrayImage &src, GrayImage &dst, int ksize) {
    int rows = src.get_height();
    int cols = src.get_width();
    std::vector<std::vector<int>> padded;
    std::vector<std::vector<int>> original(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            original[i][j] = src.get_pixel(i, j);
        }
    }
    zeroPadArray(original, padded, ksize);

    std::vector<int> filter(ksize * ksize);
    int padsize = ksize / 2;
    for (int i = padsize; i < rows + padsize; i++) {
        for (int j = padsize; j < cols + padsize; j++) {
            int index = 0;
            for (int ki = -padsize; ki <= padsize; ki++) {
                for (int kj = -padsize; kj <= padsize; kj++) {
                    filter[index++] = padded[i + ki][j + kj];
                }
            }
            std::sort(filter.begin(), filter.end());
            dst.set_pixel(i - padsize, j - padsize, filter[ksize * ksize / 2]);
        }
    }
}

void BitFieldFilter::ApplySharpeningFilter(GrayImage &src, GrayImage &dst) {
    int rows = src.get_height();
    int cols = src.get_width();
    std::vector<std::vector<int>> padded;
    std::vector<std::vector<int>> original(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            original[i][j] = src.get_pixel(i, j);
        }
    }
    zeroPadArray(original, padded, 3);

    int filter[3][3] = {{-1, -1, -1}, {-1, 8, -1}, {-1, -1, -1}};
    int padsize = 1;
    for (int i = padsize; i < rows + padsize; i++) {
        for (int j = padsize; j < cols + padsize; j++) {
            int sum = 0;
            for (int ki = -padsize; ki <= padsize; ki++) {
                for (int kj = -padsize; kj <= padsize; kj++) {
                    sum += padded[i + ki][j + kj] * filter[ki + padsize][kj + padsize];
                }
            }
            dst.set_pixel(i - padsize, j - padsize, std::min(std::max(sum, 0), 255));
        }
    }
}

void BitFieldFilter::ApplyReverseFilter(GrayImage &dst) {
    int rows = dst.get_height();
    int cols = dst.get_width();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dst.set_pixel(i, j, 255 - dst.get_pixel(i, j));
        }
    }
}

void BitFieldFilter::ApplyEnhanceContrast(GrayImage &dst, double a, double b) {
    int rows = dst.get_height();
    int cols = dst.get_width();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int newVal = static_cast<int>(round(a * dst.get_pixel(i, j) + b));
            dst.set_pixel(i, j, std::min(std::max(newVal, 0), 255));
        }
    }
}

void BitFieldFilter::ApplyChangeBrightness(GrayImage &dst, double c) {
    int rows = dst.get_height();
    int cols = dst.get_width();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int newVal = static_cast<int>(round(c * log(1 + dst.get_pixel(i, j))));
            dst.set_pixel(i, j, std::min(std::max(newVal, 0), 255));
        }
    }
}

void BitFieldFilter::ApplySobelGradientFilter(GrayImage &src, GrayImage &dst) {
    int rows = src.get_height();
    int cols = src.get_width();
    std::vector<std::vector<int>> padded;
    std::vector<std::vector<int>> original(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            original[i][j] = src.get_pixel(i, j);
        }
    }
    zeroPadArray(original, padded, 3);

    int filter_h[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int filter_v[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
    int padsize = 1;
    for (int i = padsize; i < rows + padsize; i++) {
        for (int j = padsize; j < cols + padsize; j++) {
            int grad_x = 0, grad_y = 0;
            for (int ki = -padsize; ki <= padsize; ki++) {
                for (int kj = -padsize; kj <= padsize; kj++) {
                    grad_x += padded[i + ki][j + kj] * filter_h[ki + padsize][kj + padsize];
                    grad_y += padded[i + ki][j + kj] * filter_v[ki + padsize][kj + padsize];
                }
            }
            int gradient = static_cast<int>(round(sqrt(pow(grad_x, 2) + pow(grad_y, 2))));
            dst.set_pixel(i - padsize, j - padsize, std::min(std::max(gradient, 0), 255));
        }
    }
}
