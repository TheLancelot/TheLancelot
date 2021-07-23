int buzzer = 3;
int sensor = 0;

void setup()
{
pinMode(3,OUTPUT);
}

void loop()
{
int buzz=map(analogRead(sensor),200,650,2000,20);
tone(buzzer,buzz);
delay(100);

}
