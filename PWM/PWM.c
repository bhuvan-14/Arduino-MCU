#define PWM 5
void setup() {
  pinMode(PWM,OUTPUT);

}

void loop() {
  int i;
  for(i=0;i<=255;i++){
    analogWrite(PWM,i);
    delay(10);
  }
  for(i=255;i>=0;i--){
    analogWrite(PWM,i);
    delay(10);
  }
}
