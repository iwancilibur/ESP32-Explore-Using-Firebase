/*
  Latihan 2
  LDR (Sensor Analog) Cahaya
  .
  @Iwan Cilibur / +628988541995
  +6287775593898 (Office)
  www.interactiverobotics.club
 */
int pinsensor=32;

void setup() {
  Serial.begin(115200);
  pinMode(pinsensor, INPUT);
}

void loop() {
  int datasensor=analogRead(pinsensor);
 Serial.println(datasensor);
 delay(500);
}
