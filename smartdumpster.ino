#include<LiquidCrystal.h>
#define echoPin 10
#define trigPin 8
int temp=1, level=100, ppm=0;
int len;
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
 lcd.print("SMART DUMPSTER");
  delay(2000);
  lcd.clear();
      tempr();
      gas();
}

void loop() 
{
  measure();
  wifi_connect();
  rdelay(8);
  wifi_send();
  rdelay(8); 
}
