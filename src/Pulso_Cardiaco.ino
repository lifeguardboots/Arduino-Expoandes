int pulso = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop() 
{
  pulso=analogRead(A0);
  if (pulso>=513)
  {
     digitalWrite(11, LOW);
     delay(30);
     digitalWrite(11, HIGH);
  }

  delay(50);
  Serial.println(pulso);
}
