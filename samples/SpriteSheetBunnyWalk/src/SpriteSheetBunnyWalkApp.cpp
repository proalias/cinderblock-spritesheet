#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class SpriteSheetBunnyWalkApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void SpriteSheetBunnyWalkApp::setup()
{
}

void SpriteSheetBunnyWalkApp::mouseDown( MouseEvent event )
{
}

void SpriteSheetBunnyWalkApp::update()
{
}

void SpriteSheetBunnyWalkApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( SpriteSheetBunnyWalkApp, RendererGl )
