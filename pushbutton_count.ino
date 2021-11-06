// C++ code
//

int BUTTON=8;
int count =0;
void setup()
{
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(BUTTON) == HIGH){
    count =count +1;
    Serial.println(count);
    
  }

}