
float duration, value;
void measure()
{
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 value=duration/58.20;
 if(value>63)
 level=0;
 else if(value<4)
 level=100;
 else
 level= map(value, 3, 63, 100, 0);
  lcd.setCursor(0,0);
  lcd.print(level);  
  lcd.print("%Fill");
  delay(500);
}

