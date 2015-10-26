#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sunsetImage.loadImage("sunset.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}
static float t = 0.0;
//--------------------------------------------------------------
void ofApp::draw(){
    if (t >= 1.0) return;
    shiftShader.begin();
    shiftShader.setUniform1f("amount", t);
    sunsetImage.draw(0, 0);
    shiftShader.end();
    t += 0.02;
    ofSaveFrame();
}
