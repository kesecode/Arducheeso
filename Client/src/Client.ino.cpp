# 1 "/var/folders/lc/dcm3sz4d577_bpw296nwdc580000gn/T/tmpuJAhWf"
#include <Arduino.h>
# 1 "/Users/davidweppler/Documents/GitHub/Arducheeso/Client/src/Client.ino"
#include <ESP8266WiFi.h>

const char* ssid = "Phil";
const char* password = "root003347";

const char* host = "172.20.10.4";
void setup();
void loop();
#line 8 "/Users/davidweppler/Documents/GitHub/Arducheeso/Client/src/Client.ino"
void setup() {
  Serial.begin(115200);

  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("connected");
}


void loop() {
  WiFiClient client;

  Serial.printf("\n[Connecting to %s ... ", host);

  if(client.connect(host, 80)) {
    Serial.println("connected]");
  }

  else {
    Serial.println("connection failed!]");
    client.stop();
  }

  while(client.connected()) {
    if (digitalRead(2)==false) {
      Serial.println("**************************************************");
      Serial.println("********************Triggered!********************");
      Serial.println("**************************************************");
      Serial.println("[Sending a request]");
      client.print(String("GET /") + " HTTP/1.1\r\n" +
                  "Host: " + host + "\r\n" +

                  "\r\n");
      Serial.println("__________________________________________________________");
      Serial.println("                     [Response:]");
      Serial.println("__________________________________________________________");
      Serial.println("__________________________________________________________");

      while (client.connected()) {
        if (client.available()) {
            String line = client.readStringUntil('\n');
            Serial.println(line);
          }
        }
      }
    }
}