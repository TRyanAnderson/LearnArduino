
int startingPin;
int currentPin;
int myPins[] = {10,11,12,13};
int delayPeriod;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<4; i++)
  {
    pinMode(myPins[i], OUTPUT);
  }
  currentPin = 0;
  startingPin = 0;
  delayPeriod = 500;
}

void loop() {
  // put your main code here, to run repeatedly:
  
    digitalWrite(myPins[currentPin], HIGH);
    digitalWrite(myPins[(currentPin+3)%4], LOW);
    delay(delayPeriod);
  

  currentPin = (currentPin + 1)%4;
  delayPeriod-=10;

  if(delayPeriod<160)
  {
    delayPeriod=500;
  }
  
}
