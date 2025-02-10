#include "data_loader.h"

Data_Loader::Data_Loader(){
    ;
}

// Assume user will free the image
Data_Loader::~Data_Loader(){
    ;
}

int **Data_Loader::Load_Gray(string filename, int *w, int *h){
    assert(File_Exists(filename)); //如果assert後的值為false或0，則會強制終止程式
    CImg<unsigned char> img(filename.c_str()); //使用CImg庫加載圖像文件

    int _w = img.width(); //用CImg函式庫傳回寬度
    int _h = img.height(); //用CImg函式庫傳回高度
    int _c = img.spectrum(); //用CImg函式庫傳回幾個通道(gray -> 1, RGB -> 3)

    *w = _w; //call by reference去改變外部數值
    *h = _h; //同上

    // allocate memory for the image array
    int **pixels = new int *[_h];
    for(int i = 0; i < _h; i++){
        pixels[i] = new int[_w];
    }

    // gray scale image
    if(_c == 1){
        // macro to loop through the img
        cimg_forXY(img, x, y){
            pixels[y][x] = (int)img(x,y);
        }
        return pixels;
    }
    
    // rgb img -> convert it into gray scale img
    if(_c == 3){
        CImg<unsigned char> grayscale_img(_w, _h, 1);
        cimg_forXY(grayscale_img, x, y){
            grayscale_img(x, y) = (unsigned char)(R_FACTOR * img(x, y, 0, 0) + G_FACTOR * img(x, y, 0, 1) + B_FACTOR * img(x, y, 0, 2)); //for luminance formula: Y = 0.2126R + 0.7152G + 0.0722B
        }
        cimg_forXY(img, x, y){
            pixels[y][x] = (int)grayscale_img(x,y);
        }
        return pixels;
    }

    // for CMYK or other spetrum(其他類型的圖片)
    return nullptr;
}

int ***Data_Loader::Load_RGB(string filename, int *w, int *h){
    assert(File_Exists(filename)); //如果assert後的值為false或0，則會強制終止程式
    CImg<unsigned char> img(filename.c_str()); //使用CImg庫加載圖像文件

    int _w = img.width(); //用CImg函式庫傳回寬度
    int _h = img.height(); //用CImg函式庫傳回高度
    int _c = img.spectrum(); //用CImg函式庫傳回色度

    *w = _w; //call by reference去改變外部數值
    *h = _h; //同上

    if(_c != 3) return nullptr; //彩階可轉灰階，但灰階不可轉彩階

    // Allocate memory for the 3D array
    int ***pixels = new int**[_h];
    for(int i = 0; i < _h; ++i) {
        pixels[i] = new int*[_w];
        for(int j = 0; j < _w; ++j) {
            pixels[i][j] = new int[_c];
        }
    }

    // Copy pixel values from the image to the 3D array
    cimg_forXYC(img, x, y, c) {
        pixels[y][x][c] = img(x, y, c);
    }
    return pixels;
}

void Data_Loader::Dump_Gray(int w, int h, int **pixels, string filename){ //將灰階圖像數據保存到文件中
    assert(pixels != nullptr && w > 0 && h > 0); //檢查是否為有效灰階圖片
    // Create a CImg object with the specified width and height
    CImg<unsigned char> img(w, h, 1 /*有效pointer*/, 1); // Grayscale image (1 channel)

    // Iterate through the image data and set pixel values
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            // Set the grayscale pixel value
            img(x, y) = (unsigned char)pixels[y][x]; //將像素數據存儲在圖像對象中
        }
    }
    img.save(filename.c_str()); //保存到文件中

}

void Data_Loader::Dump_RGB(int w, int h, int ***pixels, string filename){
    assert(pixels != nullptr && w > 0 && h > 0); //檢查是否為有效彩階圖片
    // Create a CImg object with the specified width, height, and 3 channels (RGB)
    CImg<unsigned char> img(w, h, 1, 3);

    // Iterate through the pixel values and set them in the CImg object
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            // Set the RGB pixel values
            img(x, y, 0) = pixels[y][x][0]; // Red channel
            img(x, y, 1) = pixels[y][x][1]; // Green channel
            img(x, y, 2) = pixels[y][x][2]; // Blue channel
        }
    }

    // Save the image to a file
    img.save(filename.c_str());
}

void Data_Loader::Display_Gray_X_Server(int w, int h, int **pixels){
    assert(pixels != nullptr && w > 0 && h > 0);
    // Create a grayscale image using CImg
    CImg<unsigned char> grayscale_img(w, h, 1); // 1 channel for grayscale

    // Copy pixel values from the 2D array to the grayscale image
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            grayscale_img(x, y) = (unsigned char)pixels[y][x];
        }
    }

    // Display the loaded image
    CImgDisplay disp(grayscale_img, "Loaded Image");
    while (!disp.is_closed()) {
        disp.wait();
    }
}

void Data_Loader::Display_RGB_X_Server(int w, int h, int ***pixels){
    assert(pixels != nullptr && w > 0 && h > 0);
    // Create a CImg object for the RGB image
    CImg<unsigned char> rgb_img(w, h, 1, 3); // 3 channels for RGB

    // Copy pixel values from the 3D array to the RGB image
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            for (int c = 0; c < 3; ++c) { // 3 channels (R, G, B)
                rgb_img(x, y, 0, c) = (unsigned char)(pixels[y][x][c]);
            }
        }
    }

    // Display the RGB image
    CImgDisplay disp(rgb_img, "Loaded Image");
    while (!disp.is_closed()) {
        disp.wait();
    }
}

void Data_Loader::Display_Gray_ASCII(int w, int h, int **pixels){
    assert(pixels != nullptr && w > 0 && h > 0);
    // ASCII characters representing different shades of gray
    const char* shades = " .-+#@";

    // Display the grayscale image as ASCII art
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            // Map pixel intensity to ASCII character
            int intensity = pixels[y][x];
            int index = intensity * strlen(shades) / 255; // Scale intensity to match shades
            std::cout << shades[index] << shades[index];
        }
        std::cout << std::endl;
    }
}

void Data_Loader::Display_RGB_ASCII(int w, int h, int ***pixels){
    assert(pixels != nullptr && w > 0 && h > 0);
    // ASCII characters representing different shades of gray
    const char* shades = " .-+#@";

    // Display the RGB image as ASCII art
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            // Convert RGB pixel values to grayscale intensity
            int intensity = (pixels[y][x][0] + pixels[y][x][1] + pixels[y][x][2]) / 3;
            // Map intensity to ASCII character
            int index = intensity * strlen(shades) / 255; // Scale intensity to match shades
            std::cout << shades[index] << shades[index];
        }
        std::cout << std::endl;
    }
}

void Data_Loader::Display_Gray_CMD(string filename){ //負責通過命令行工具顯示灰階圖像。
    assert(File_Exists(filename));
    string cmd = "./third-party/catimg/bin/catimg " + string(filename);
    system(cmd.c_str());
}

void Data_Loader::Display_RGB_CMD(string filename){ //負責通過命令行工具顯示灰階圖像。
    assert(File_Exists(filename));
    string cmd = "./third-party/catimg/bin/catimg " + string(filename);
    system(cmd.c_str()); //let cmd become C string and ensert into system
                         //systerm will put the command outside the cpp
}

bool Data_Loader::List_Directory(string directoryPath, vector<string> &filenames) { //列出目錄中的文件
    struct dirent *entry;
    DIR *dp;

    dp = opendir(directoryPath.c_str());
    if (dp == NULL) {
        perror("opendir: Path does not exist or could not be read.");
        return -1;
    }

    while ((entry = readdir(dp))){
        // store all the .png filename into vector
        if(string(entry->d_name) == "." || string(entry->d_name) == "..") continue;
        filenames.push_back(directoryPath + "/" + string(entry->d_name));
    }

    closedir(dp);
    return 0;
}

bool Data_Loader::File_Exists(const string &filename){
    ifstream file(filename.c_str());
    return file.good();
} 