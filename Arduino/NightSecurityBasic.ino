int buzzer = 3;
int sensor=0;
int frequency=20;
void setup()
{

}

void loop() 
{
  //Security buzzer if light turned on at night XD
 int value=analogRead(sensor);
 if(value>500)
 {
  tone(buzzer,450);
  delay(400);
  noTone(buzzer);
  delay(400);
//  frequency=frequency+100;
//  tone(buzzer,frequency);
//  delay(100);
//  if(frequency>20000)
//  frequency=0;
 }
}
