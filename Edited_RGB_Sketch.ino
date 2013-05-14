int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
  setColor(6, 25, 88); // White
  delay(1000);
  setColor(255, 165, 0); //Orange
  delay(1000);
  setColor(186, 85, 211);
  delay(1000);
  setColor(159,182, 205); // slategray 3
  delay(1000);
  setColor(0, 134, 139); // turquoise 4
  delay(1000);
  setColor(0, 201, 87); // emeraldgreen
  delay(1000);
  setColor(255, 255, 255); //off
  delay(2000);
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, 255-red);
  analogWrite(greenPin, 255-green);
  analogWrite(bluePin, 255-blue);
}
