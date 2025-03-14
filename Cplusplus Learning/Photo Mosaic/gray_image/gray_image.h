#ifndef _GRAY_IMAGE_H_
#define _GRAY_IMAGE_H_

#include "image.h"
#include <string>

class GrayImage : public Image{
private:
	int** pixels;
public:
  GrayImage(); //need default constructor by wenderyang
	GrayImage(int width, int height, int **pixels); //copy constructor
	~GrayImage();
	bool LoadImage(string filename); //觸發data_loader的LoadImage
	void DumpImage(string filename); //觸發data_loader的DumpImage
	void Display_X_Server(); //顯現灰階圖於X server
	void Display_ASCII(); //用ASCII art方式顯現灰階圖
	void Display_CMD(); //tricky:the filename require us to find. by wenderyang
  int get_pixel(int x, int y) const;
  void set_pixel(int x, int y, int value);
};

#endif