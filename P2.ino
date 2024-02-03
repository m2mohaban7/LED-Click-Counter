// C++ code
int button = 2;
int red = 4;
int yellow = 7;
int green = 8;
int reading = 0;
int counter = 0;
int time = 250;

void setup() 
{
  pinMode(button,INPUT);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  reading = digitalRead(button);
  if (reading == HIGH) 
  {
    counter ++;
    if (counter == 1)
    {
      digitalWrite(red,HIGH);
    }
    else if (counter == 2)
    {
      digitalWrite(yellow,HIGH);
    }
    else if (counter == 3)
    {
      digitalWrite(green,HIGH);
    }
   else 
   {
     digitalWrite(red,LOW);
     digitalWrite(yellow,LOW);
     digitalWrite(green,LOW);
     counter = 0;
   }
   delay(time);
   }
}