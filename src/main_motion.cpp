// #include <Arduino.h>
// #include <ESP8266WiFi.h>
// #include <PubSubClient.h>
// //#include "Ticker.h"

// #define INPUT_PIN D8
// #define LED D4


// #define wifi_ssid "automata"
// #define wifi_password "BluePal3D*t"

// #define mqtt_server "192.168.31.51"
// const char topic[] = "sensors/out-door";
// const char topicIn[] = "sensors/out-door/in";



// void callback(char* topic, byte* payload, unsigned int length) {
//   //Serial.print(String(*payload));
// }

// WiFiClient espClient;
// PubSubClient client(mqtt_server, 1883, callback, espClient);

// void reconnect();
// void setup_wifi();
// void turnOff();

// int oldValue = 0;

// //Ticker timerOff(turnOff, 500);

// void setup() {
//   Serial.begin(115200);

//   pinMode(INPUT_PIN, INPUT_PULLUP);
//   pinMode(LED, OUTPUT); 
  

//   setup_wifi();

//   Serial.println("Connecting to mqtt broker");
//   if (client.connect("out-door")) {
//     client.publish(topic, "Connected");
//     client.subscribe(topicIn);
//     Serial.println("Connected");
//   }
// }

// void loop() {
//    if (!client.connected()) {
//     reconnect();
//   }
//   client.loop();
//   //timerOff.update();


//   int value = digitalRead(D2);
//   if (value != oldValue) {
//     oldValue = value;
//     Serial.println(value);
//     digitalWrite(LED, LOW); // turn the LED on.

//     if (value == 1) {
//       Serial.println(value);
//       digitalWrite(LED, HIGH); // turn the LED on.
//     }
//   }
//   delay(100);

// }

// void setup_wifi() {
//   delay(10);
//   // We start by connecting to a WiFi network
//   Serial.println();
//   Serial.print("Connecting to ");
//   Serial.println(wifi_ssid);

//   WiFi.mode(WIFI_STA);
//   WiFi.begin(wifi_ssid, wifi_password);

//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }

//   Serial.println("");
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());
// }

// void reconnect() {
//   // Loop until we're reconnected
//   while (!client.connected()) {
//     Serial.print("Attempting MQTT connection...");
//     // Attempt to connect
//     // If you do not want to use a username and password, change next line to
//     if (client.connect("out-door")) {
//    // if (client.connect("ESP8266Client", mqtt_user, mqtt_password)) {
//       Serial.println("connected");
//     } else {
//       Serial.print("failed, rc=");
//       Serial.print(client.state());
//       Serial.println(" try again in 5 seconds");
//       // Wait 5 seconds before retrying
//       delay(5000);
//     }
//   }
// }

// void turnOff(){

// }