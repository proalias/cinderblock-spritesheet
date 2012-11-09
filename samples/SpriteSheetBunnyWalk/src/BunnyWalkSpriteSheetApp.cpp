#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "cinder/Easing.h"

#include "SpriteSheet.h"
#include <stdio.h>

using namespace ci;
using namespace ci::app;
using namespace std;

class BunnyWalkSpriteSheetApp : public AppBasic {
  public:
	void setup();
	void update();
	void draw();

	gl::Texture backgroundTexture;
	gl::Texture bunnyWalkTexture;
	SpriteSheet bunnyWalk;

};

void BunnyWalkSpriteSheetApp::setup()
{
	backgroundTexture = loadImage(("./background.jpg"));
	
	bunnyWalkTexture = loadImage(("./bunny.png"));
	bunnyWalk = SpriteSheet();
	bunnyWalk.init(bunnyWalkTexture, "./bunny.xml", SpriteSheet::FORMAT_TEXTUREPACKER_GENERIC_XML);


	bunnyWalk.x = 600.0f;
	bunnyWalk.y = 100.0f;

	timeline().apply(&bunnyWalk.x, 600.0f,-200.f,5.0f,ci::EaseNone()).loop(true);
}


void BunnyWalkSpriteSheetApp::update()
{
	bunnyWalk.update();
}

void BunnyWalkSpriteSheetApp::draw()
{
	// clear out the window with white
	gl::clear( Color( 1.0, 1.0, 1.0 ) );
	
	gl::enableAlphaBlending(true);
	gl::draw(backgroundTexture);
	bunnyWalk.draw();

}

CINDER_APP_BASIC( BunnyWalkSpriteSheetApp, RendererGl )
