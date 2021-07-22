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
 
  for (i = 0; i < 180; i = i + 1)
  {
    Nishad.write(i);
    delay(10);
  }
  for (i = 179; i > 0; i = i - 1)
  {
    Nishad.write(i);
   delay(10);
  }
}
