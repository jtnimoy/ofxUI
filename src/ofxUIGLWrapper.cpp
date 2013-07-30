#include "ofxUIGLWrapper.h"

ofxUIVec2f::ofxUIVec2f(){
	x=0;
	y=0;
}

ofxUIVec2f::ofxUIVec2f(float _x,float _y){
	x = _x;
	y = _y;
}

void ofxUIDrawRect(float x,float y, float w, float h){
	glRectf(x,y,x+w,y+h);
}


ofxUIColor::ofxUIColor(){
	r=0;
	g=0;
	b=0;
	a=0;
}

ofxUIColor::ofxUIColor(int v,int _a){
	r=v;
	g=v;
	b=v;
	a=_a;
}

ofxUIColor::ofxUIColor(int _r,int _g,int _b,int _a){
	r=_r;
	g=_g;
	b=_b;
	a=_a;
}

void ofxUIPushStyle(){
	
}

void ofxUIPopStyle(){
	
}
