#ifndef _DATA_LOADER_H_
#define _DATA_LOADER_H_

#define cimg_use_jpeg
#define cimg_use_png
#include "CImg.h"
#include <iostream>
#include <string>
#include <cassert>
#include <vector>
#include <cstdlib>
#include <fstream>

// for luminance formula: Y = 0.2126R + 0.7152G + 0.0722B
#define R_FACTOR 0.2126
#define G_FACTOR 0.7152
#define B_FACTOR 0.0722

using namespace std;
using namespace cimg_library; //與影像的數位化有關

class Data_Loader{

public:
    Data_Loader(); //無用
    ~Data_Loader(); //無用
    int **Load_Gray(string filename, int *w, int *h); //回傳圖片的寬度、高度、及圍成的2維陣列
    int ***Load_RGB(string filename, int *w, int *h); //回傳圖片的寬度、高度、RGB性質及圍成的3維陣列
    void Dump_Gray(int w, int h, int **pixels, string filename); //創建一個Img的gray object
    void Dump_RGB(int w, int h, int ***pixels, string filename);  //創建一個Img的RGB object
    void Display_Gray_X_Server(int w, int h, int **pixels); //顯現在X Server上
    void Display_RGB_X_Server(int w, int h, int ***pixels); //同上
    void Display_Gray_ASCII(int w, int h, int **pixels); //用ASCII art顯現出來
    void Display_RGB_ASCII(int w, int h, int ***pixels); //同上
    void Display_Gray_CMD(string filename); //在cpp外行使system command
    void Display_RGB_CMD(string filename); //在cpp外行使system command
    bool List_Directory(string directoryPath, vector<string> &filenames); //儲存圖像名

private:
    bool File_Exists(const string &filename); //判斷是否存在該圖檔
};

#endif