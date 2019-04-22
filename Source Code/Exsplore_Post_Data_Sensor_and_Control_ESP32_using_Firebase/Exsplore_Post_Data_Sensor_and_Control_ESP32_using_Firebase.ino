/*
  Explore
  POST Data Sensor dan Control dengan Google Firebase
  .
  .
  @Iwan Cilibur / +628988541995
  +6287775593898 (Office)
  www.interactiverobotics.club
 */
 
#include <WiFi.h>
#include <IOXhop_FirebaseESP32.h>
#include <DHT.h>

#define DHTPIN 32   
#define DHTTYPE DHT22 
DHT dht(DHTPIN, DHTTYPE);

// Masukan Host Firebase dan Aut Token Firebase
#define WIFISSID "www.interactiverobotics.club3" // WifiSSID
#define PASSWORD  "cilibur2019"   // WifiPassword
#define FIREBASE_HOST "esp32tutorial.firebaseio.com"  //Host Firebase
#define FIREBASE_AUTH "0QuTPAXe5zdg1iSCtGdNvuFU6xiWAlje58LAVI5U" //Kode Token Firebase

//Membuat Variable

int relay1=18;
int sensor=32;

void setup() {
  //Menentukan Fungsi dari PIN
  pinMode(sensor,INPUT);
  pinMode(relay1,OUTPUT);

  dht.begin();
  
  Serial.begin(115200);
  WiFi.begin(WIFISSID, PASSWORD);
  Serial.print("Menghubungkan...");
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(500);
    }
  Serial.println("");
  Serial.println("WiFi Terhubung.");
  Serial.println("IP address: ");
  Serial.print(WiFi.localIP());
  Serial.println();

  //Firebase Konfigurasi
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.set("suhu", 0);
  Firebase.set("kelembaban", 0);
  Firebase.set("sensor", 0);
  Firebase.set("relay1", 0);
}

void loop() {

//Ambil data Sensor
float suhu=dht.readTemperature();
float kelembaban=dht.readHumidity();
int datasensor=analogRead(sensor);

//Post Data Sensor
Firebase.setString("pesan", "Hallo Saya dari ESP32");
Firebase.setFloat("suhu",suhu);
Firebase.setFloat("kelembaban",kelembaban);
Firebase.setFloat("sensor",datasensor);
//Program Control
digitalWrite(relay1, Firebase.getInt("relay1"));
     
}
