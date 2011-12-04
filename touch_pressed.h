bool touchPressed(){
	return (Sensor(IN_4) == 1);
}

void savePressedState(){
	pressed = 1;
}

void resetPressedState(){
	pressed = 0;
}

bool wasPressed(){
	return(pressed == 1);
}

bool touchUnpressed(){
	return(Sensor(IN_4) != 1);
}

bool touchPressedAndUnpressed(){
	if(touchPressed()){
		savePressedState();
	}
	if(wasPressed() && touchUnpressed()){
		resetPressedState();
		return true;
	}
	else {
		return false;
	}
}