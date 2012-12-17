#ifndef SpriteSheet_h
#define SpriteSheet_h


#include "cinder\Cinder.h"
#include "cinder\gl\Texture.h"
#include "cinder\Xml.h"
#include "cinder/Timeline.h"
#include <stdio.h>

#include "SpriteData.h"
#include "SpriteDataParser.h"

class SpriteSheet{
public:
	
	static const int FORMAT_TEXTUREPACKER_GENERIC_XML = 1;

	void draw();
	void update();
	void setFrame(int frameNum);
	int getCurrentFrame();
	void getTotalFrames();

	ci::Anim<float> x;
	ci::Anim<float> y;
	ci::Anim<float> scale;
	ci::Anim<float> rotation;
	ci::Anim<float> alpha;

	bool reverse;
	bool isPlaying;
	bool loop;

	float width;
	float height;

	std::vector<int> stopAtFrames;

	void init(ci::gl::Texture spriteImage, std::string xmlPath, int DataFormat);

private:
	int __currentFrame;
	int __totalFrames;
	ci::gl::Texture __spriteImage;
	std::vector<SpriteData> __spriteData;
	int __textureWidth;
	int __textureHeight;

};

#endif