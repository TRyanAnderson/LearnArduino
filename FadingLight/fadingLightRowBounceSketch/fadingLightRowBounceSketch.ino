
int startingPin;
int currentPin;
int previousPin;
int myPins[] = {3,5,6,9};
int delayPeriod;
int blinkDirection;

void setup() {
  // put your setup code here, to run once:
 
  currentPin = 0;
  previousPin=3;
  startingPin = 0;
  delayPeriod = 500;
  blinkDirection=1;
}

void loop() {
  
  fadeLightOn(myPins[currentPin]);
  fadeLightOff(myPins[previousPin]);  
  previousPin=currentPin;
  currentPin = (currentPin + (blinkDirection))%4;
  
  if(currentPin==3 || currentPin ==0)
  {
    blinkDirection*=-1;
  } 
}

void fadeLightOn(int currentPin)
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(currentPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(6);
  }
}

void fadeLightOff(int currentPin)
{
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(currentPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(12);
  }
}

