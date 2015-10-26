#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sunsetImage.loadImage("sunset.png");
    shiftShader.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    shiftShader.begin();
    shiftShader.setUniform1f("amount", 1.0 * mouseX / ofGetWidth());
    sunsetImage.draw(0, 0);
    shiftShader.end();
}
