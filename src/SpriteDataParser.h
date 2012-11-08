#ifndef SpriteDataParser_h
#define SpriteDataParser_h

#include "cinder\Cinder.h"
#include "cinder\app\App.h"
#include "cinder\Xml.h"
#include "SpriteData.h"
#include "SpriteSheet.h"

class SpriteDataParser{
public:
	static std::vector<SpriteData> parseSpriteData(std::string filePath, int format);

private:
	static ci::XmlTree spriteXml;
	static std::vector<SpriteData> sprites;
};



#endif