/*
  Latihan 4
  DHT22 (Sensor Digital , Temperature dan Humidity)
  .
  .
  @Iwan Cilibur / +628988541995
  +6287775593898 (Office)
  www.interactiverobotics.club
 */
 
#include <DHT.h>

#define DHTPIN 4   
//#define DHTTYPE DHT11  
#define DHTTYPE DHT22  
//#define DHTTYPE DHT21  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("DHT11 test!");
  dht.begin();
}

void loop() {
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.println();
  delay(1000);
}
