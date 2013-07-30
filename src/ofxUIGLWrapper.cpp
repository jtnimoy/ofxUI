#include "ofxUIGLWrapper.h"

ofxUIVec2f::ofxUIVec2f(){
	this->x=0;
	this->y=0;
}

ofxUIVec2f::ofxUIVec2f(float _x,float _y){
	this->x = _x;
	this->y = _y;
}

void ofxUIDrawRect(float x,float y, float w, float h){
	glRectf(x,y,x+w,y+h);
}
