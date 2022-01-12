#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	realsense.setupDevice();
	realsense.enableDepth(640, 480,30);
	realsense.enableColor(640, 480,30);
	realsense.startStream();

	gui.setup(guiUtils.setupGUI(&realsense));
}

//--------------------------------------------------------------
void ofApp::update(){
	realsense.update();
	if (realsense.isFrameNew())
	{
		//ofSetWindowShape(realsense.getDepthWidth() + realsense.getColorWidth(), realsense.getDepthHeight());
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	ofPushMatrix();
	ofSetColor(255);
	realsense.drawDepth(0,0);
	realsense.drawColor(realsense.getDepthWidth(),0);
	ofPopMatrix();
	ofDrawBitmapStringHighlight("fps:" + ofToString(ofGetFrameRate(), 2), ofGetWidth() - 160, ofGetHeight() - 20);
	gui.draw();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

