#pragma once
/**
   @author jtnimoy
   @author colin roache
   for implementations sitting on just OpenGL
*/


class ofxUIVec2f{
public:
	ofxUIVec2f();
	ofxUIVec2f(float _x,float _y);
	float x;
	float y;
};

class ofxUIImage{
public:
	void loadImage(string f);
	float getWidth();
	float getHeight();
	void resize(int w,int h);
	void draw(int x,int y);
	void draw(int x,int y,int w,int h);
	void drawSubsection(float,float,float,float,float,float,float,float);
	void drawSubsection(float,float,float,float,float,float);
};

class ofxUIColor{
public:
	ofxUIColor();
	ofxUIColor(int,int);
	ofxUIColor(const ofxUIColor& that);
	ofxUIColor(const ofxUIColor& that,float _a);
	ofxUIColor(int,int,int,int);
	void copy(ofxUIColor that);
	float r;
	float g;
	float b;
	float a;
};

class ofxUIFont{
public:
	void drawString(string s,float x,float y);
	float stringWidth(string s);
	float stringHeight(string s);
	float getLineHeight();
};

#define MIN std::min
#define MAX std::max
#define OFX_UI_KEY_RIGHT GLUT_KEY_RIGHT
#define OFX_UI_KEY_UP GLUT_KEY_UP
#define OFX_UI_KEY_LEFT GLUT_KEY_LEFT
#define OFX_UI_KEY_DOWN GLUT_KEY_DOWN
#define OFX_UI_RECTMODE_CENTER 1
#define OFX_UI_RECTMODE_CORNER 0

#define NN ofxUIGLWrapper
namespace NN{
/**
   if this is NULL, then we have no fill.
   if this is non-null, use the color.
*/
static ofxUIColor *color;
static bool bFill;
static unsigned int rectMode;
};


void ofxUIDrawRect(float x,float y, float w, float h);

void ofxUIPushStyle();
void ofxUIPopStyle();
void ofxUIFill();
void ofxUINoFill();
void ofxUISetColor(ofxUIColor c);
void ofxUISetColor(int brightness);
float ofxUIGetFrameRate();
void ofxUISetRectMode(unsigned int mode);
