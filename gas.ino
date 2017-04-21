#include "MQ135.h"
#define RZERO 76.00
MQ135 gasSensor = MQ135(A0);
float rero;
void gas()
{
  rero = gasSensor.getRZero();
  ppm = gasSensor.getPPM();
  ppm+=325;
  lcd.setCursor(0,1);
  lcd.print(ppm);
  lcd.print("ppm CO2");
  delay(300);
}
