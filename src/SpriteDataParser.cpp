#include "SpriteDataParser.h"

using namespace std;
using namespace ci;

vector<SpriteData> SpriteDataParser::parseSpriteData(string filePath, int format){
	cinder::XmlTree mainXml( ci::app::loadAsset( filePath ) );

	vector<SpriteData> spriteData;

	if (format == SpriteSheet::FORMAT_TEXTUREPACKER_GENERIC_XML){


		for( XmlTree::ConstIter item = mainXml.begin(); item != mainXml.end(); ++item ) {

			const XmlTree::Container &children = item->getChildren(); // item->getChildren();

			for (XmlTree::Container::const_iterator iter = children.begin(); iter != children.end(); iter ++){

				std::string tagName = (*iter)->getTag();

				if (tagName == "sprite"){


					int x, y, w, h;
					int oX = 0;
					int oY = 0;
					int oW = 0;
					int oH = 0;
					string name;

					std::list<XmlTree::Attr> attributes = (*iter)->getAttributes();
					for(std::list<XmlTree::Attr>::iterator attr = attributes.begin();attr != attributes.end();attr ++){
						if (attr->getName()=="n"){
							name = attr->getValue();
						}

						if (attr->getName()=="x"){
							x = attr->getValue<int>();
						}
						if (attr->getName()=="y"){
							y = attr->getValue<int>();
						}
						if (attr->getName()=="w"){
							w = attr->getValue<int>();
						}
						if (attr->getName()=="h"){
							h = attr->getValue<int>();
						}
						if (attr->getName()=="oX"){
							oX = attr->getValue<int>();
						}
						if (attr->getName()=="oY"){
							oY = attr->getValue<int>();
						}
						if (attr->getName()=="oW"){
							oW = attr->getValue<int>();
						}
						if (attr->getName()=="oH"){
							oH = attr->getValue<int>();
						}
					}

					SpriteData sprite = SpriteData();

					sprite.name = name;
					sprite.x = x;
					sprite.y = y;
					sprite.w = w;
					sprite.h = h;
					sprite.oX = oX;
					sprite.oY = oY;
					sprite.oW = oW;
					sprite.oH = oH;


					spriteData.push_back(sprite);


				}
			}

		}


	}
	
	return spriteData;
}