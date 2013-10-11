#ifndef SpriteData_h
#define SpriteData_h

#include "cinder/Cinder.h"
#include <stdio.h>

class SpriteData{
public:

	std::string name; 
	float x;
	float y;
	float w;
	float h;
	float oX;
	float oY;
	float oW;
	float oH;

	SpriteData(std::string name, float x, float y, float w, float h, float oX, float oY, float oW, float oH){
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
		h = 0.0f;
		w = 0.0f;
		x = 0.0f;
		y = 0.0f;
		oX = 0.0f;
		oY = 0.0f;
		oW = 0.0f;
		oH = 0.0f;
		name = "undefined";
	}

};

#endif