#ifndef SpriteData_h
#define SpriteData_h

#include "cinder\Cinder.h"
#include <stdio.h>

class SpriteData{
public:

	
	std::string name; 
	int x;
	int y;
	int w;
	int h;
	int oX;
	int oY;
	int oW;
	int oH;

	SpriteData(std::string name, int x, int y, int w, int h, int oX, int oY, int oW, int oH){
			this->h = h;
			this->w = w;
			this->x = x;
			this->y = y;
			this->oX = oX;
			this->oY = oY;
			this->oW = oW;
			this->oH = oH;
			this->name = name;
	}

	SpriteData(void){
		h = 0;
		w = 0;
		x = 0;
		y = 0;
		oX = 0;
		oY = 0;
		oW = 0;
		oH = 0;
		name = "undefined";
	}

};

#endif