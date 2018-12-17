#include <ESP8266WiFi.h>

const char* ssid = "Phil";                                  //SSID Config
const char* password = "root003347";                          //Password Config

const char* host = "172.20.10.4";                       //SERVER IP Config

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
  WiFiClient client;                                        //Client declaration

  Serial.printf("\n[Connecting to %s ... ", host);

  if(client.connect(host, 80)) {                            //Client connecting to host
    Serial.println("connected]");
  }

  else {
    Serial.println("connection failed!]");                  //Connection failed statement
    client.stop();
  }

  while(client.connected()) {                               //Loops while client is connected to host
    if (digitalRead(2)==false) {                            //Sensor input awaited
      Serial.println("****************************************************************");
      Serial.println("***************************Triggered!***************************");
      Serial.println("****************************************************************");
      Serial.println("[Sending a request]");
      client.print(String("GET /") + " HTTP/1.1\r\n" +      //Sending a request
                  "Host: " + host + "\r\n" +
                  //"Connection: close\r\n" +
                  "\r\n");
      Serial.println("__________________________________________________________");
      Serial.println("                     [Response:]");
      Serial.println("__________________________________________________________");
      Serial.println("__________________________________________________________");

      while (client.connected()) {
        if (client.available()) {
            String line = client.readStringUntil('\n');     //Reading data response from host
            Serial.println(line);
          }
        }
      }
    }
}
