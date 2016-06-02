
int startingPin;
int currentPin;
int previousPin;
int myPins[] = {10,11,12,13};
int delayPeriod;
int blinkDirection;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<4; i++)
  {
    pinMode(myPins[i], OUTPUT);
  }
  currentPin = 0;
  previousPin=3;
  startingPin = 0;
  delayPeriod = 500;
  blinkDirection=1;
}

void loop() {
  // put your main code here, to run repeatedly:
  
    digitalWrite(myPins[currentPin], HIGH);
    digitalWrite(myPins[previousPin], LOW);
    delay(delayPeriod);
  
  previousPin=currentPin;
  currentPin = (currentPin + (blinkDirection))%4;
  delayPeriod-=10;
  if(currentPin==3 || currentPin ==0)
  {
    blinkDirection*=-1;
  }

  if(delayPeriod<160)
  {
    delayPeriod=500;
  }
  
}
