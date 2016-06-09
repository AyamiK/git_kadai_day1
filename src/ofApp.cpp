#include "ofApp.h"
#include <iostream>
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor(180, 180, 180);
    ofSetLineWidth(1.5);
    
    for(int i = 1; i <= 21; i++){
        ofLine(0, 38.4*i, 1024, 38.4*i);
    }
    for(int i = 1; i <= 31; i++){
        ofLine(34.13*i, 0, 34.13*i, 768);
    }
    ofLine(0, mouseY, 1024, mouseY);
    ofLine(mouseX, 0, mouseX, 768);
    
    float triX = mouseX - 512;
    float triY = 384 - mouseY;
    float triTheta = atan2(triY, triX);
    int angle = (180 * triTheta) / PI;
    cout << angle << endl;
    if(angle < 0){
        angle = angle + 360;
    }
    
    ofColor color = ofColor::fromHsb(ofMap(angle, 0, 360, 0, 255), 255, 255);
    ofSetColor( color );
    
    ofNoFill();
    float radius1 = ofDist(mouseX, mouseY, 512, 384);
    ofCircle(512, 384, radius1);
    
    ofFill();
    float radius2 = ofDist(mouseX, mouseY, 512, 384)/6;
    ofCircle(512, 384, radius2);
    
    ofLine(512, 384, mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){


}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
