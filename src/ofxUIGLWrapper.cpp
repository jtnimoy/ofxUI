/**
   @author jtnimoy
   @author colin roache
   for implementations sitting on just OpenGL
*/

#include "ofxUIGLWrapper.h"



ofxUIColor NN::color = ofxUIColor(255,255);
bool NN::bFill = true;
unsigned int NN::rectMode = OFX_UI_RECTMODE_CORNER;

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


ofxUIColor::ofxUIColor(const ofxUIColor& that,float _a){
	this->copy(that);
	a = _a;
}

ofxUIColor::ofxUIColor(const ofxUIColor& that){
	this->copy(that);
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

void ofxUIColor::copy(ofxUIColor that){
	r = that.r;
	g = that.g;
	b = that.b;
	a = that.a;
}


void ofxUIPushStyle(){
	//TODO
}

void ofxUIPopStyle(){
	//TODO
}

void ofxUIFill(){
	NN::bFill = true;
}

void ofxUINoFill(){
	NN::bFill = false;
}

void ofxUISetColor(ofxUIColor c){
	color.copy(c);
}

void ofxUISetColor(int b){
	color.copy(ofxUIColor(b,b,b,this->a));
}


void ofxUIFont::drawString(string s, float x,float y){
	//TODO
}

float ofxUIFont::stringWidth(string s){
	//TODO
	return 0;
}

float ofxUIFont::stringHeight(string s){
	//TODO
	return 0;
}

float ofxUIFont::getLineHeight(){
	//TODO
	return 0;
}

float ofxUIGetFrameRate(){
	//TODO
	return 0;
}

void ofxUIImage::drawSubsection(float x,float y,float w,float h,
								float sx,float sy,float sw,float sh){
	//TODO
}

void ofxUIImage::drawSubsection(float x,float y,float w,float h,
								float sx,float sy){
	//TODO
}



void ofxUIImage::draw(int x,int y,int w,int h){
	//TODO
}



void ofxUIImage::draw(int x,int y){
	//TODO
}



void ofxUIImage::loadImage(string f){
	//TODO
}


float ofxUIImage::getWidth(string f){
	//TODO
	return 0;
}


float ofxUIImage::getHeight(string f){
	//TODO
	return 0;
}


void ofxUIImage::resize(int w,int h){
	//TODO
}

void ofxUISetRectMode(unsigned int mode){
	NN::rectMode = mode;
}

//this sticks to bottom of the file
#undef NN


