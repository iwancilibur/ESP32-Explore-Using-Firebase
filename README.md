# ESP32-Explore-with-Firebase
Menghubungkan Mikrokontroller ESP32 dengan "Backend" Google firebase (realtime database) dan di Tampilkan di Dashboard Bootstrap "Frontend"

1. Instal IDE programming ex_ (Arduino IDE, PlatformIO, Microsoft Visual Studio Code, etc)
2. Instal Library ESP32 Board 
3. Instal Library Firebase
4. Configure Firebase Account 
5. Post Example data to Firebase
6. Control LED from Firebase 
7. Post data Sensor LDR (Analog Sensor) & DHT11 (Digital Sensor)
8. Introduction Relay Module 220 V
9. Create Frontend using Bootsrap Dashboard
10. Upload Frontend to Web Hosting Service

Now, You can Monitor and Control IOT Device from Web Browser using Internet Connection, Happy Makers ^_^


Lets Go :

1.Create and Configure Firebase Account
-Create or login to your Gmail Account
-Go to https://firebase.google.com
-Create Database
-Edite Rule, Like this:

{
  /* Visit https://firebase.google.com/docs/database/security to learn more about security rules. */
  "rules": {
    ".read": true,
    ".write": true
  }
}

-Publish

2.Get Your Authentication Token for your Firebase on Privacy and Setting
  ex_ 0QuTPAXe5zdg1iSCtGdNvuFU6xiWAlje58LAVI5U
  
Happy Coding:
