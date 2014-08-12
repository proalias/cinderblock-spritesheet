#ifndef SpriteSheet_h
#define SpriteSheet_h


#include "cinder/Cinder.h"
#include "cinder/gl/Texture.h"
#include "cinder/Xml.h"
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
	int getTotalFrames();

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
    float oWidth;
    float oHeight;
    
    int oX, oY;

	std::vector<int> stopAtFrames;
	
	void init(ci::gl::TextureRef spriteImage, ci::XmlTree xml, int DataFormat = FORMAT_TEXTUREPACKER_GENERIC_XML);

private:
	int __currentFrame;
	int __totalFrames;
	ci::gl::TextureRef __spriteImage;
	std::vector<SpriteData> __spriteData;
	int __textureWidth;
	int __textureHeight;

};

#endif