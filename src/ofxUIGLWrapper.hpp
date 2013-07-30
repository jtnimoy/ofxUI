#pragma once

/**
   @author jtnimoy
   for implementations sitting on just OpenGL
*/


class ofxUIVec2f{
public:
	ofxUIVec2f();
	ofxUIVec2f(float _x,float _y);
	float x;
	float y;
};

class ofxUIColor{
public:
	ofxUIColor();
	ofxUIColor(int,int);
	ofxUIColor(int,int,int,int);
	float r;
	float g;
	float b;
	float a;
};

class ofxUIFont{

};

#define MIN std::min
#define MAX std::max

void ofxUIDrawRect(float x,float y, float w, float h);

void ofxUIPushStyle();
void ofxUIPopStyle();
