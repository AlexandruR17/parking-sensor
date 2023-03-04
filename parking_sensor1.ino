#include <Adafruit_LiquidCrystal.h>

//LCD
Adafruit_LiquidCrystal lcd_1(0);


//Ultrasonic Sensor
int inches = 0;
int cm = 0;
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

//Buzzer
int buzzer = 3;


void setup()
{
  // LCD and Serial Monitor
  Serial.begin(9600);
  lcd_1.begin(16, 2);
  lcd_1.print("AlexandruR");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Github Project");
  delay(1000);
  lcd_1.clear();
  
  // Buzzer
  pinMode (buzzer, OUTPUT);
  
}

void loop()
{
 cm = 0.01723 * readUltrasonicDistance(7, 7);
 inches = (cm / 2.54);
 Serial.print(inches);
 Serial.print("in, ");
 Serial.print(cm);
 Serial.println("cm");
 delay(10);
 if (cm > 200)
 {
   lcd_1.clear();
 }
  else if (cm < 200 && cm > 100)
  {
   lcd_1.setCursor(6, 0);
   lcd_1.print(round(cm));
   tone(buzzer,500);
   digitalWrite(13, HIGH);
   digitalWrite(12, HIGH);
   delay(700);    
   noTone(buzzer); 
   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
   lcd_1.clear();

  }
  
  else if (cm < 100 && cm > 50)
    {
   lcd_1.setCursor(6, 0);
   lcd_1.print(round(cm));
   tone(buzzer,700);
   digitalWrite(13, HIGH);
   digitalWrite(12, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(9, HIGH);
   delay(500);    
   noTone(buzzer); 
   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
   digitalWrite(11, LOW);
   digitalWrite(10, LOW);
   digitalWrite(9, LOW);
   
  }
  else 
    {
   lcd_1.setCursor(6, 0);
   lcd_1.print(round(cm));
   tone(buzzer,700);
   digitalWrite(13, HIGH);
   digitalWrite(12, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(5, HIGH);
   delay(150);    
   noTone(buzzer); 
   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
   digitalWrite(11, LOW);
   digitalWrite(10, LOW);
   digitalWrite(9, LOW);
   digitalWrite(6, LOW);
   digitalWrite(5, LOW);

  }
    
  
}