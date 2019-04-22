/*
  Latihan 1
  Blinking LED
  .
  .
  @Iwan Cilibur / +628988541995
  +6287775593898 (Office)
  www.interactiverobotics.club
 */
int Led=LED_BUILTIN;
void setup() {
  // put your setup code here, to run once:
pinMode(Led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Led,HIGH);
delay(100);
digitalWrite(Led,LOW);
delay(100);
}
