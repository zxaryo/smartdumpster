void wifi_connect()
{
  Serial.print("AT+CWMODE=1\r\n");
  rdelay(3);
  Serial.print("AT+CWJAP=\"zxaryo\",\"duckpasswords\"\r\n");
  //Serial.print("AT+CIFSR\r\n");
  
  lcd.setCursor(15,1);
  lcd.print("~");
}
void wifi_send()
{
  
  lcd.setCursor(15,1);
  lcd.print((char)94);
  Serial.print("AT+CIPSTART=\"TCP\",\"184.106.153.149\",80\r\n");
  rdelay(3);
    
  String post="GET /update?key=4ED6UH2ZVRJ35DSE&field1=";
  post=post+temp+"&field2="+level+"&field3="+ppm+"\r\n";
  len= post.length();
  String comm ="AT+CIPSEND=";
  comm=comm+len+"\r\n";
  
  Serial.print(comm);
  rdelay(3);
  Serial.print(post);
  rdelay(3);
  Serial.print("AT+CWQAP\r\n");
  rdelay(3);
  Serial.print("AT+CIPCLOSE\r\n");
  rdelay(3);
  lcd.setCursor(15,1);
  lcd.print("~");
}

