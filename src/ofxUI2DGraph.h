/**********************************************************************************
 
 Copyright (C) 2012 Syed Reza Ali (www.syedrezaali.com)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
 **********************************************************************************/

#ifndef OFXUI_2D_GRAPH
#define OFXUI_2D_GRAPH

#include "ofxUIWidget.h"

class ofxUI2DGraph : public ofxUIWidget
{
public:    
    ofxUI2DGraph(string _name, ofxUIPoint _rangeX, ofxUIPoint _rangeY, int _bufferSize, float * _xValues, float * _yValues, float w, float h, float x = 0, float y = 0) : ofxUIWidget()
    {
        init(_name, _rangeX, _rangeY, _bufferSize, _xValues, _yValues, w, h, x, y);
    }
        
    void init(string _name, ofxUIPoint _rangeX, ofxUIPoint _rangeY, float _bufferSize, float * _xValues, float * _yValues, float w, float h, float x = 0, float y = 0)
    {
        rect = new ofxUIRectangle(x,y,w,h);
		name = string(_name);
		kind = OFX_UI_WIDGET_2DGRAPH;
		paddedRect = new ofxUIRectangle(-padding, -padding, w+padding*2.0, h+padding*2.0);
		paddedRect->setParent(rect);
        draw_fill = true;
        
        bufferSize = _bufferSize; 
        rangeX = _rangeX;
        rangeY = _rangeY;
        
        xValues = _xValues;
        yValues = _yValues;
        
        inc = MAX(rect->getHalfHeight(), rect->getHalfWidth())/4.+padding*.5;
    }
    
    virtual void drawBack()
    {
        if(draw_back)
        {
            ofxUIFill();
            ofxUISetColor(color_back);
            rect->draw();
            
            ofxUIPushMatrix();
            ofxUITranslate(rect->getX(), rect->getY(), 0);

            for(int x = 0; x <= rect->getWidth(); x+=inc)
            {
                ofxUIDrawLine(x, 0, x, rect->getHeight());   //y
            }
            
            for(int y = 0; y <= rect->getHeight(); y+=inc)
            {
                ofxUIDrawLine(0, y, rect->getWidth(), y);   //x
            }
            
            ofxUISetLineWidth(2);
            ofxUIDrawLine(rect->getHalfWidth(), 0, rect->getHalfWidth(), rect->getHeight());   
            ofxUIDrawLine(0, rect->getHalfHeight(), rect->getWidth(), rect->getHalfHeight());
            ofxUIPopMatrix(); 
            ofxUINoFill();
            rect->draw();
            
            ofxUISetLineWidth(1);
            ofxUIFill();            
        }
    }
    
    
    virtual void drawFill()
    {
        if(draw_fill)
        {
			ofxUINoFill();
			if(draw_fill_highlight)
			{
				ofxUISetColor(color_fill_highlight);
			}
			else
			{
				ofxUISetColor(color_fill);
			}
            if(xValues != NULL && yValues != NULL)
            {
                ofxUIPushMatrix(); 
                ofxUITranslate(rect->getX(), rect->getY(), 0);
                ofxUISetLineWidth(1.5);
                ofxUIPolyline line;
                for(int i =0; i < bufferSize; i++)
                {
                    line.addVertex(ofxUIMap(xValues[i], rangeX.x, rangeX.y, 0.0, rect->getWidth(), true), ofxUIMap(yValues[i], rangeY.x, rangeY.y, 0.0, rect->getHeight(), true));
                }
                line.draw(); 
                ofxUISetLineWidth(1);
                ofxUIPopMatrix(); 
            }
        }
    }
    
	void setParent(ofxUIWidget *_parent)
	{
		parent = _parent;
	}
    
protected:    //inherited: ofxUIRectangle *rect; ofxUIWidget *parent;
	float *xValues;
	float *yValues;
    ofxUIPoint rangeX, rangeY;
	float inc;
	int bufferSize;
};

#endif
