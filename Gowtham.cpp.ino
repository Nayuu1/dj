void setup()
{
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
}
void loop()
{
  delay(100);
  digitalWrite(D0,1);
  delay(500);
  digitalWrite(D1,1);
  delay(1000);
  digitalWrite(D2,1);
  delay(1500);
}
