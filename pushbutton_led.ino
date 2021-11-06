const int BUTTON = 9;
const int LED = 8;
int BUTTONstate = 0;
int count = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON);
  if (BUTTONstate == HIGH)
  {
    if(count == 0){
      digitalWrite(LED, HIGH);
      count =count +1;
    
    }
    else if(count == 1){
      digitalWrite(LED, LOW);
      count =count -1;
    
    }
    delay(500);
  } 
  
  
  
}