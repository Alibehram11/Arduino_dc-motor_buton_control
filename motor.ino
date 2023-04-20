#define motsol2b 6
#define motsag 7
#define motsag2b 8
void setup()
{
 pinMode(but, INPUT);
 pinMode(but1, INPUT);
 pinMode(but2, INPUT);
 pinMode(motsol1b, OUTPUT);
 pinMode(motsol2b, OUTPUT);
 pinMode(motsag, OUTPUT);
 pinMode(motsag2b , OUTPUT);
}

void loop(){
  if (digitalRead(but) == 0){
  digitalWrite(motsol1b,HIGH);      
  digitalWrite(motsol2b,LOW);
  }
  
  if (digitalRead(but1) == 0){
   digitalWrite(motsag, HIGH);   
  digitalWrite(motsag2b, LOW);
  }
  
}