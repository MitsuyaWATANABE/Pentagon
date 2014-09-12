#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofBackground(0, 0, 0);
    pentagon = new ofxPentagon();
    shapeCount = 1;
    font.loadFont("futura_book.otf", 11);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
    pentagon->drawShape(shapeCount);
    
    font.drawString("This is a sample for drawing Pentagon figure.\n\nTyping a key between 0 and 9 display it.", 80, 200);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    switch (key) {
        case '0':
            shapeCount = 10;
            break;
        case '1':
            shapeCount = 1;
            break;
        case '2':
            shapeCount = 2;
            break;
        case '3':
            shapeCount = 3;
            break;
        case '4':
            shapeCount = 4;
            break;
        case '5':
            shapeCount = 5;
            break;
        case '6':
            shapeCount = 6;
            break;
        case '7':
            shapeCount = 7;
            break;
        case '8':
            shapeCount = 8;
            break;
        case '9':
            shapeCount = 9;
            break;
            
        default:
            shapeCount = 1;
            break;
    }
}
