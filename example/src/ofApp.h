#pragma once

#include "ofMain.h"
#include "ofxHueShift.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    ofImage sunsetImage;
    ofxHueShift shiftShader;
};
