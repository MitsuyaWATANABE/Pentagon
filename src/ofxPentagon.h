//
//  ofxPentagon.h
//  Pentagon
//
//  Created by Mitsuya.WATANABE on 2014/08/23.
//
//

#ifndef __Pentagon__ofxPentagon__
#define __Pentagon__ofxPentagon__

#include <iostream>

#endif /* defined(__Pentagon__ofPentagon__) */
#pragma once
#include "ofMain.h"

class ofxPentagon : public ofBaseApp {
    public:
    ofxPentagon();
    virtual ~ofxPentagon();
    void pentagon(float centerX, float centerY, float size);
    void drawShape(int num);
};
