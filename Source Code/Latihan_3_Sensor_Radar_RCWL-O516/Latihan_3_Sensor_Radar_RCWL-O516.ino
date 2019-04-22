/*
  Latihan 3
  Sensor Radar RCWL-O516 ()
  Sensor Gerak Gelombang Micro Radar doppler
  Membaca gelombang suara di sekitar dan pergerakan
  hingga 4 Meter
  .
  .
  @Iwan Cilibur / +628988541995
  +6287775593898 (Office)
  www.interactiverobotics.club
 */
int pinSensor=27;
int led=18;
void setup(){
  Serial.begin(115200);
  pinMode(pinSensor,INPUT);
  pinMode(led,OUTPUT);
}

void loop(){
  int bacasensor=digitalRead(pinSensor);
  Serial.println(bacasensor);
  delay(500);
}
