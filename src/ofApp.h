#pragma once

#include "ofMain.h"
#include "ofxPentagon.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
    
        ofxPentagon *pentagon;
        int shapeCount;
        ofTrueTypeFont font;
};
