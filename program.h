void moveRobot(){
	OnFwd(OUT_AC, 100);
}

void stopRobot(){
	Off(OUT_AC);
}

void runProgram(){
	if(touchPressedAndUnpressed()){
		toggleRunningState();
	}
	if(isRunning()){
		moveRobot();
	}
	else {
		stopRobot();
	}
}