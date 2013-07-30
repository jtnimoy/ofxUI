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
	void operator-=(ofxUIVec2f that);
	ofxUIVec2f operator-(ofxUIVec2f that);
	float x;
	float y;
	float angle(ofxUIVec2f that);
};

typedef ofxUIVec2f ofxUIPoint;

class ofxUIVec3f{
public:
	float x;
	float y;
	float z;
	ofxUIVec3f();
	ofxUIVec3f(float, float);
	ofxUIVec3f(float, float, float);
	
};

class ofxUIPolyline{
public:
	void addVertex(float,float);
	void draw();
};

class BaseDraws{
public:
	void draw();
	void draw(float,float,float,float);
	float getHeight(){return 0; /*todo */}
	float getWidth(){return 0; /*todo */}
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

template <class ofxUIEventArgs>
class ofxUIEvent{
public:
	ofxUIEvent<ofxUIEventArgs>();
};


class ofxUIAppCBGlue
{
public:        
    //ofBaseApp *app;
    
    void EnableCallbacks()
	{
        //enableAppDrawCallback();
        //enableAppUpdateCallback();
        //enableAppExitCallback();
#ifdef OFX_UI_TARGET_TOUCH
        //enableTouchEventCallbacks();
#else
        //enableMouseEventCallbacks();
        //enableWindowEventCallbacks();
#endif
        //enableKeyEventCallbacks();
	}
	
	void DisableCallbacks()
	{
        //disableAppDrawCallback();
        //disableAppUpdateCallback();
        //disableAppExitCallback();
#ifdef OFX_UI_TARGET_TOUCH
        //disableTouchEventCallbacks();
#else
        //disableMouseEventCallbacks();
        //disableWindowEventCallbacks();
#endif
        //disableKeyEventCallbacks();
    }
    
   	//App Callbacks
    void enableAppEventCallbacks()
    {
        //ofAddListener(ofEvents().update, this, &ofxUIAppCBGlue::onUpdate);
        //ofAddListener(ofEvents().draw, this, &ofxUIAppCBGlue::onDraw);
        //ofAddListener(ofEvents().exit, this, &ofxUIAppCBGlue::onExit);
    }
	
	//App Callbacks
    void disableAppEventCallbacks()
    {
        //ofRemoveListener(ofEvents().update, this, &ofxUIAppCBGlue::onUpdate);
        //ofRemoveListener(ofEvents().draw, this, &ofxUIAppCBGlue::onDraw);
        //ofRemoveListener(ofEvents().exit, this, &ofxUIAppCBGlue::onExit);
    }
	
    void enableAppDrawCallback()
    {
        //ofAddListener(ofEvents().draw, this, &ofxUIAppCBGlue::onDraw);
    }
    
    void enableAppUpdateCallback()
    {
        //ofAddListener(ofEvents().update, this, &ofxUIAppCBGlue::onUpdate);
    }
    
    void enableAppExitCallback()
    {
        //ofAddListener(ofEvents().exit, this, &ofxUIAppCBGlue::onExit);
    }
    
    void disableAppDrawCallback()
    {
        //ofRemoveListener(ofEvents().draw, this, &ofxUIAppCBGlue::onDraw);
    }
    
    void disableAppUpdateCallback()
    {
        //ofRemoveListener(ofEvents().update, this, &ofxUIAppCBGlue::onUpdate);
    }
    
    void disableAppExitCallback()
    {
        //ofRemoveListener(ofEvents().exit, this, &ofxUIAppCBGlue::onExit);
    }
    
#ifdef OFX_UI_TARGET_TOUCH
	
	//Touch Callbacks
    void enableTouchEventCallbacks()
    {
        
        //ofAddListener(ofEvents().touchUp, this, &ofxUIAppCBGlue::onTouchUp);
        //ofAddListener(ofEvents().touchDown, this, &ofxUIAppCBGlue::onTouchDown);
        //ofAddListener(ofEvents().touchMoved, this, &ofxUIAppCBGlue::onTouchMoved);
        //ofAddListener(ofEvents().touchCancelled, this, &ofxUIAppCBGlue::onTouchCancelled);
        //ofAddListener(ofEvents().touchDoubleTap, this, &ofxUIAppCBGlue::onTouchDoubleTap);
    }
    
	void disableTouchEventCallbacks()
    {
        //ofRemoveListener(ofEvents().touchUp, this, &ofxUIAppCBGlue::onTouchUp);
        //ofRemoveListener(ofEvents().touchDown, this, &ofxUIAppCBGlue::onTouchDown);
        //ofRemoveListener(ofEvents().touchMoved, this, &ofxUIAppCBGlue::onTouchMoved);
        //ofRemoveListener(ofEvents().touchCancelled, this, &ofxUIAppCBGlue::onTouchCancelled);
        //ofRemoveListener(ofEvents().touchDoubleTap, this, &ofxUIAppCBGlue::onTouchDoubleTap);
    }
	
#else
	
	//Mouse Callbacks
    void enableMouseEventCallbacks()
    {
        //ofAddListener(ofEvents().mouseReleased, this, &ofxUIAppCBGlue::onMouseReleased);
        //ofAddListener(ofEvents().mousePressed, this, &ofxUIAppCBGlue::onMousePressed);
        //ofAddListener(ofEvents().mouseMoved, this, &ofxUIAppCBGlue::onMouseMoved);
        //ofAddListener(ofEvents().mouseDragged, this, &ofxUIAppCBGlue::onMouseDragged);
    }
    
	//Mouse Callbacks
    void disableMouseEventCallbacks()
    {
        //ofRemoveListener(ofEvents().mouseReleased, this, &ofxUIAppCBGlue::onMouseReleased);
        //ofRemoveListener(ofEvents().mousePressed, this, &ofxUIAppCBGlue::onMousePressed);
        //ofRemoveListener(ofEvents().mouseMoved, this, &ofxUIAppCBGlue::onMouseMoved);
        //ofRemoveListener(ofEvents().mouseDragged, this, &ofxUIAppCBGlue::onMouseDragged);
    }
    
    //Window Resize Callback
    void enableWindowEventCallbacks()
    {
        //ofAddListener(ofEvents().windowResized, this, &ofxUIAppCBGlue::onWindowResized);
    }
    
	//Window Resize Callback
    void disableWindowEventCallbacks()
    {
        //ofRemoveListener(ofEvents().windowResized, this, &ofxUIAppCBGlue::onWindowResized);
    }
	
#endif
    
    //KeyBoard Callbacks
	void enableKeyEventCallbacks()
	{
		//ofAddListener(ofEvents().keyPressed, this, &ofxUIAppCBGlue::onKeyPressed);
		//ofAddListener(ofEvents().keyReleased, this, &ofxUIAppCBGlue::onKeyReleased);
	}
    
	//KeyBoard Callbacks
	void disableKeyEventCallbacks()
	{
		//ofRemoveListener(ofEvents().keyPressed, this, &ofxUIAppCBGlue::onKeyPressed);
		//ofRemoveListener(ofEvents().keyReleased, this, &ofxUIAppCBGlue::onKeyReleased);
	}
    
	/*
    void onUpdate(ofEventArgs &data)
    {
        //update();
    }
        
    void onDraw(ofEventArgs &data)
    {
        //draw();
    }
        
    void onExit(ofEventArgs &data)
    {
        //exit();
    }
    
    void onKeyPressed(ofKeyEventArgs& data)
    {
		//keyPressed(data.key);
    }
    
    void onKeyReleased(ofKeyEventArgs& data)
    {
		//keyReleased(data.key);
    }
    
    virtual void onMousePressed(ofMouseEventArgs& data)
    {
        //mousePressed(data.x, data.y, data.button);
    }

    virtual void onMouseDragged(ofMouseEventArgs& data)
    {
        //mouseDragged(data.x, data.y, data.button);
    }

    virtual void onMouseReleased(ofMouseEventArgs& data)
    {
        //mouseReleased(data.x, data.y, data.button);
    }
        
    virtual void onMouseMoved(ofMouseEventArgs& data)
    {
        //mouseMoved(data.x, data.y);
    }

    void onWindowResized(ofResizeEventArgs& data)
    {
		//windowResized(data.width, data.height);
    }
	*/
    virtual void update()
    {
        
    }
    
    virtual void draw()
    {
        
    }
    
    virtual void exit()
    {
        
    }
    
    virtual void keyPressed(int key)
    {
        
    }
    
    virtual void keyReleased(int key)
    {
        
    }
    
    virtual void mousePressed(int x, int y, int button)
    {
        
    }

    virtual void mouseDragged(int x, int y, int button)
    {
        
    }

    virtual void mouseReleased(int x, int y, int button)
    {
        
    }
    
    virtual void mouseMoved(int x, int y)
    {
        
    }

    virtual void windowResized(int w, int h)
    {

    }
    
#ifdef OFX_UI_TARGET_TOUCH
	
    virtual void onTouchDown(ofTouchEventArgs &data)
    {
		//touchDown(data.x, data.y, data.id);
    }
    
    virtual void onTouchMoved(ofTouchEventArgs &data)
    {
		//touchMoved(data.x, data.y, data.id);
    }

    virtual void onTouchUp(ofTouchEventArgs &data)
    {
		//touchUp(data.x, data.y, data.id);
    }

    virtual void onTouchDoubleTap(ofTouchEventArgs &data)
    {
		//touchDoubleTap(data.x, data.y, data.id);
    }
    
	virtual void onTouchCancelled(ofTouchEventArgs &data)
    {
		//touchCancelled(data.x, data.y, data.id);
    }
    
    virtual void touchDown(float x, float y, int id)
    {
        
    }
    
    virtual void touchMoved(float x, float y, int id)
    {
        
    }
    
    virtual void touchUp(float x, float y, int id)
    {
        
    }
    
    virtual void touchDoubleTap(float x, float y, int id)
    {
        
    }

    virtual void touchCancelled(float x, float y, int id)
    {
        
    }

#endif
};



class ofImage{
public:
	void loadImage(string f);
	float getWidth();
	float getHeight();
	void resize(int w,int h);
	void draw(int x,int y);
	void draw(int x,int y,int w,int h);
	void drawSubsection(float,float,float,float,float,float,float,float);
	void drawSubsection(float,float,float,float,float,float);
	void clear();
	ofxUIColor getColor(int x,int y);
};

class ofxUIFont{
public:
	void drawString(string s,float x,float y);
	float stringWidth(string s);
	float stringHeight(string s);
	float getLineHeight();
	void loadFont(string,int,bool, bool, bool, float,int);

};

#define OFX_UI_BLENDMODE_ALPHA 1
#define MIN std::min
#define MAX std::max
#define OFX_UI_KEY_RIGHT GLUT_KEY_RIGHT
#define OFX_UI_KEY_UP GLUT_KEY_UP
#define OFX_UI_KEY_LEFT GLUT_KEY_LEFT
#define OFX_UI_KEY_DOWN GLUT_KEY_DOWN

// ?
#define OFX_UI_KEY_BACKSPACE 82

//duno if glut has it?
#define OFX_UI_KEY_DEL 83

// ?
#define OFX_UI_KEY_RETURN 81

//TODO these are bits in a glut func param
#define OFX_UI_KEY_MODIFIER 84
#define OFX_UI_KEY_CTRL 85
#define OFX_UI_KEY_ALT 86
#define OFX_UI_KEY_SHIFT 87

#define OFX_UI_KEY_F1 GLUT_KEY_F1
#define OFX_UI_KEY_F2 GLUT_KEY_F2
#define OFX_UI_KEY_F3 GLUT_KEY_F3
#define OFX_UI_KEY_F4 GLUT_KEY_F4
#define OFX_UI_KEY_F5 GLUT_KEY_F5
#define OFX_UI_KEY_F6 GLUT_KEY_F6
#define OFX_UI_KEY_F7 GLUT_KEY_F7
#define OFX_UI_KEY_F8 GLUT_KEY_F8
#define OFX_UI_KEY_F9 GLUT_KEY_F9
#define OFX_UI_KEY_F10 GLUT_KEY_F10
#define OFX_UI_KEY_F11 GLUT_KEY_F11
#define OFX_UI_KEY_F12 GLUT_KEY_F12
#define OFX_UI_KEY_PAGE_UP GLUT_KEY_PAGE_UP
#define OFX_UI_KEY_PAGE_DOWN GLUT_KEY_PAGE_DOWN
#define OFX_UI_KEY_HOME GLUT_KEY_HOME
#define OFX_UI_KEY_END GLUT_KEY_END
#define OFX_UI_KEY_INSERT GLUT_KEY_INSERT



#define OFX_UI_RECTMODE_CENTER 1
#define OFX_UI_RECTMODE_CORNER 0
#define OFX_UI_LOG_VERBOSE 0

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
void ofxUISetColor(ofxUIColor c,float _a);
void ofxUISetColor(int brightness);
float ofxUIGetFrameRate();
void ofxUISetRectMode(unsigned int mode);
void ofxUICircle(float x,float y,float rx,float ry);
void ofxUICircle(float x,float y,float r);
float ofxUIDist(float x1,float y1,float x2,float y2);
float ofxUIDrawLine(float x1,float y1,float x2,float y2);
void ofxUIPushMatrix();
void ofxUIPopMatrix();
void ofxUITranslate(float,float,float z=0);
void ofxUISetLineWidth(float);
int ofxUIGetKeyPressed();
void ofxUIBeginShape();
void ofxUIVertex(float,float);
void ofxUIEndShape(bool bClose=false);
float ofxUIDegToRad(float);
void ofxUIEnableBlendMode(int);
float ofxUIGetHeight();
