bool isRunning(){
	return(running == 1);
}

void toggleRunningState(){
	if(running == 1) {
		running = 0;
	}
	else {
		running = 1;
	}
}