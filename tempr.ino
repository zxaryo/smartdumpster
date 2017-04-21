int tempPin = A3;
void tempr()
{
  temp = (5.0 * analogRead(tempPin) * 100.0) / 1024;
  lcd.setCursor(12,0);
  lcd.print(temp);
  lcd.print((char)223);
  lcd.print("C");
}
