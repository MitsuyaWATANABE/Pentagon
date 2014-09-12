//
//  ofxPentagon.cpp
//  Pentagon
//
//  Created by Mitsuya.WATANABE on 2014/08/23.
//
//

#include "ofxPentagon.h"

ofxPentagon::ofxPentagon() {
    
}


ofxPentagon::~ofxPentagon() {
}

void ofxPentagon::drawShape(int num) {
    ofSetColor(255, 255, 255);
    ofVec3f center = ofVec3f( ofGetWidth() / 2, ofGetHeight() / 2, 0.0);
    ofPushMatrix();
    ofTranslate(center);
    
    float alpha = 0.0;
    float minColVal = 50.0;
    float maxColVal = 200.0;

    for (int i = 0; i < num; i++) {
	    ofRotateZ(ofGetElapsedTimef() * 10);
        pentagon(0, 0, 800 - i * 80);
    }
    ofPopMatrix();    
}

void ofxPentagon::pentagon(float centerX, float centerY, float size) {
    float cos[] = {0.95105654, 0.5877853, -0.5877852, -0.95105654, 0};
    float sin[] = {-0.309017, 0.809017, 0.809017, -0.30901697, -1};
    float radius = size / 2;
    
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    ofNoFill();
    ofBeginShape();
    for(int i = 0; i < 5; i++){
        float tx = cos[i] * radius + centerX;
        float ty = sin[i] * radius + centerY;
        ofVertex(tx, ty);
    }
    ofEndShape();
}