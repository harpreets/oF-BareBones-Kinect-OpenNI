#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    /************************ Kinect ***************************/
    numDevices = openNIDevice[0].getNumDevices();
    for(int deviceID=0;deviceID<numDevices;++deviceID){
        openNIDevice[deviceID].setup();
        openNIDevice[deviceID].addDepthGenerator();
        openNIDevice[deviceID].addUserGenerator();
        openNIDevice[deviceID].setMirror(true);
        openNIDevice[deviceID].start();
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for(int deviceID=0;deviceID<numDevices;++deviceID){
        openNIDevice[deviceID].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

void testApp::exit(){
    for(int deviceID=0;deviceID<numDevices;++deviceID){
        openNIDevice[deviceID].stop();
    }
}