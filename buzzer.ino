// C++ code
//

int buzzer =13;
void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(buzzer, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(buzzer, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}