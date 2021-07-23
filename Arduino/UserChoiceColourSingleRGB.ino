//single rgb changes colour as per user input
String color;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.println("What colour do you want");
  while (Serial.available() == 0)
  {}
  color = Serial.readString();

  if (color == "red")
  {
    analogWrite(11,255);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
  else if (color == "green")
  { digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(9, LOW);
  }
  else if (color == "blue")
  { digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  else if(color=="pink")
  { analogWrite(11, 255);
    analogWrite(10, 10);
    analogWrite(9, 10);
  }
    
    else if(color=="yellow")
  { analogWrite(11, 255);
    analogWrite(10, 15);
    analogWrite(9, 0);
  }
  else if(color=="cyan")
  {
    analogWrite(11, 0);
    analogWrite(10, 255);
    analogWrite(9, 255);
  }
  else
  { digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
}
