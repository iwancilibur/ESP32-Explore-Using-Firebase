/*
  Latihan 5
  POST Data dan Control dengan Google Firebase
  .
  .
  @Iwan Cilibur / +628988541995
  +6287775593898 (Office)
  www.interactiverobotics.club
 */
 
#include <WiFi.h>
#include <IOXhop_FirebaseESP32.h>

// Masukan Host Firebase dan Aut Token Firebase
#define WIFISSID "www.interactiverobotics.club3" // WifiSSID
#define PASSWORD  "cilibur2019"   // WifiPassword
#define FIREBASE_HOST "esp32tutorial.firebaseio.com"  //Host Firebase
#define FIREBASE_AUTH "0QuTPAXe5zdg1iSCtGdNvuFU6xiWAlje58LAVI5U" //Kode Token Firebase

//Membuat Variable
int pinsensor1=32;
int pinsensor2=33;
int lampu=18;

void setup() {
  //Menentukan Fungsi dari PIN
  pinMode(pinsensor1,INPUT);
  pinMode(pinsensor2,INPUT);
  pinMode(lampu,OUTPUT);
  
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
  Firebase.set("sensor1", 0);
  Firebase.set("sensor2", 0);
  Firebase.set("lampu", 0);
}

void loop() {

//Ambil data Sensor
float kirim_sensor1=analogRead(pinsensor1);
float kirim_sensor2=analogRead(33);

//Post Data Sensor
Firebase.setString("pesan", "Hallo Saya dari ESP32");
Firebase.setFloat("sensor1",kirim_sensor1);
Firebase.setFloat("sensor2",kirim_sensor2);

//Program Control
digitalWrite(lampu, Firebase.getInt("lampu"));
     
}
