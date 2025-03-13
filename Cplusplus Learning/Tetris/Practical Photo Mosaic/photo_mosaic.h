#ifndef _PHOTO_MOSAIC_H_
#define _PHOTO_MOSAIC_H_

#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include "rgb_image.h"
#include "image.h"

class PhotoMosaic{
    private:
        vector<Image*> smallImage; //<--------------------------------------------------|
        RGBImage BigImage;                                                         //   |
        int GCD;                                                                   //   |
        int kernalSize_h;  //kernal_height                                         //   |
        int kernalSize_w;  //kernal_width                                         //   |
    public:                                                                        //   |
        PhotoMosaic(const string targetImageFile); //先用constructor傳入大圖        //   |
        void InputsmallImage(const string smallImageFilename); //建構小圖vector     //   |
        void GCDofBigImage(); //找大圖的最小公因數->取得最小kernal                   //   |
        void NormalizesmallImage(); //將所有圖都標準化                               //  |
        int CalculateDifference(int h,int w); //傳入大圖的block，回傳dif最小的圖片的號碼--|
        void resultMosaic(RGBImage& Final);
};

#endif

//預想步驟:輸入大圖path -> 在main中輸入要傳入幾張圖之後在跑for
//一一輸入小圖path