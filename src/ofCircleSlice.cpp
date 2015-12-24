#include "ofCircleSlice.h"
#include "ofMain.h"

void ofCircleSlice(float x,float y, float radius, float lowAngle, float highAngle, bool closed, bool radians){
	ofPath tArcPath;
	tArcPath.setArcResolution(360);
	tArcPath.arc(x, y, radius, radius, lowAngle, highAngle);
	tArcPath.draw();
};
