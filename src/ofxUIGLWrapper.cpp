/**
   @author jtnimoy
   @author colin roache
   for implementations sitting on just OpenGL
*/

#include "ofxUIGLWrapper.h"



ofxUIColor NN::color = ofxUIColor(255,255);
bool NN::bFill = true;
unsigned int NN::rectMode = OFX_UI_RECTMODE_CORNER;

ofxUIVec3f::ofxUIVec3f(){
	x = 0;
	y = 0;
	z = 0;
}


ofxUIVec3f::ofxUIVec3f(float _x, float _y, float _z){
	x = _x;
	y = _y;
	z = _z;
}

ofxUIVec3f::ofxUIVec3f(float _x, float _y){
	//TODO
	x = _x;
	y = _y;
	z = 0;
}

void ofxUIVec2f::operator-=(ofxUIVec2f that){
	x -= that.x;
	y -= that.y;
	z -= that.z;
}

float ofxUIVec2f::angle(ofxUIVec2f that){
	return std::atan2(y - that.y,x - that.x);
}


ofxUIVec2f ofxUIVec2f::operator-(ofxUIVec2f that){
	return ofxUIVec2f( x - that.x,
					   y - that.y,
					   z - that.z );
}


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

void ofxUISetColor(ofxUIColor c,float _a){
	color.copy(c);
	color.a = _a;
}


void ofxUISetColor(int b){
	color.copy(ofxUIColor(b,b,b,this->a));
}


void ofxUIFont::loadFont(string f,int a,bool b, bool c, bool d, float e,int f){
	//TODO
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

ofxUIColor ofImage::getColor(int x,int y){
	//TODO
	return ofxUIColor();
}

void ofImage::clear(){
	//TODO
}


void ofImage::drawSubsection(float x,float y,float w,float h,
								float sx,float sy,float sw,float sh){
	//TODO
}

void ofImage::drawSubsection(float x,float y,float w,float h,
								float sx,float sy){
	//TODO
}



void ofImage::draw(int x,int y,int w,int h){
	//TODO
}



void ofImage::draw(int x,int y){
	//TODO
}



void ofImage::loadImage(string f){
	//TODO
}


float ofImage::getWidth(string f){
	//TODO
	return 0;
}


float ofImage::getHeight(string f){
	//TODO
	return 0;
}


void ofImage::resize(int w,int h){
	//TODO
}

void ofxUISetRectMode(unsigned int mode){
	NN::rectMode = mode;
}

void ofxUICircle(float x,float y,float rx,float ry){
	//TODO
}

void ofxUICircle(float x,float y,float r){
	ofxUICircle(x,y,r,r);
}

float ofxUIDist(float x1,float y1,float x2,float y2){
	float xd = x1-x2;
	float yd = y1-y2;
	return std::sqrt(xd*xd+yd*yd);
}

float ofxUIDrawLine(float x1,float y1,float x2,float y2){
	//TODO
}

void ofxUIPushMatrix(){
	glPushMatrix();
}

void ofxUIPopMatrix(){
	glPopMatrix();
}

void ofxUITranslate(float x,float y, float z=0){
	glTranslatef(x,y,z);
}


void ofxUISetLineWidth(float w){
	glLineWidth(w);
}

void ofxUIPolyline::addVertex(float x,float y){
	//TODO
}

void ofxUIPolyline::draw(){
	//TODO
}

int ofxUIGetKeyPressed(){
	//TODO
}

void ofxUIBeginShape(){
	//TODO
}


void ofxUIVertex(float x,float y){
	//TODO
}


void ofxUIEndShape(bool bClose=false){
	//TODO
}

float ofxUIDegToRad(float d){
	return (d * M_PI) / 180.0;
}


void ofxUIEnableBlendMode(int v){
	//TODO
}

void BaseDraws::draw(){
	
}

void BaseDraws::draw(float x,float y,float w,float h){
	//TODO
}


ofxUIEvent::ofxUIEvent<ofxUIEventArgs>(){
	//TODO
}


float ofxUIGetHeight(){
	//todo
	return 0;
}


//this sticks to bottom of the file
#undef NN



