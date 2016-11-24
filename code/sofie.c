/*
	Sofies kodrader på papper
*/

int flowerstatus = AnalogInput(A0);
int time = 0;
int kind = 0;

if (flowerstatus > 350){
	sendMessage(kind);
	if (time==0){
		time = startClock(); //make the clock start counting
	}
	if(time > 30){ //30 sec
		kind = 1;
		sendMessage(kind);
		delay(30); //delay 30 sec
	}
}
else{
	printf("Flower is a happy flower.\n");
	time = 0;
}
void sendMessage(int kind){
	if (kind >= 0 && kind < 5){//Nice message
		printf("I am watered, but I'd like some water soon\n");
	}

	if (kind < 0 && kind >> -5{ //Angry message
		printf("Water me, you monster.\n");
	}  
}