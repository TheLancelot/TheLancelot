#include <Servo.h>
Servo Nishad;
int pot=1;
int i;
void setup()
{
  // put your setup code here, to run once:
  Nishad.attach(3);

}

void loop()
{
  //rotate servo using potentiometer
int value=map(analogRead(1),0,1023,0,179);
Nishad.write(value);

}
