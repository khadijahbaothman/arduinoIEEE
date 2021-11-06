// C++ code
//

#define Buzzer 13

#define c 261 
#define d 294
#define e 329
#define f 349
#define g 392
#define a 440
#define b 493
#define C 523



void setup()
{
  pinMode(Buzzer, OUTPUT);
}

void loop()
{
  
 
  tone(Buzzer,c,1915);
  delay(500);
  tone(Buzzer,d,1700);
  delay(500);
  tone(Buzzer,e,1519);
  delay(500);
  tone(Buzzer,f,1432);
  delay(500);
  tone(Buzzer,g,1275);
  delay(500);
  tone(Buzzer,a,1136);
  delay(500);
  tone(Buzzer,b,1014);
  delay(500);
  tone(Buzzer,c,956);
  delay(50000000000);
 
  
  
  

}