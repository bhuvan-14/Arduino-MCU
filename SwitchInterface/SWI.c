#define LED1 8
#define LED2 9
#define SW1  6
#define SW2  5
#define SW3  4
#define SW4  3
void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(SW1,INPUT_PULLUP);
  pinMode(SW2,INPUT_PULLUP);
  pinMode(SW3,INPUT_PULLUP);
  pinMode(SW4,INPUT_PULLUP);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
}

void loop() {
  if(digitalRead(SW1)==0){
    digitalWrite(LED1,HIGH);
  }
  else if(digitalRead(SW2)==0){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
  }
  else if(digitalRead(SW3)==0){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
  }
  else if(digitalRead(SW4)==0){

    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
  }

}

