// Librarys
#include <WiFi.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>
// WIFI info
const char* ssid = "Inteli-COLLEGE";
const char* password = "QazWsx@123";

//Your Domain name with URL path or IP address with path
String serverName = "https://ku085t-3000.preview.csb.app/getinfo";

unsigned long lastTime = 0;

unsigned long timerDelay = 5000;

int led1 = 4;
int led2 = 5;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  Serial.println("Connecting");

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Timer set to 5 seconds (timerDelay variable), it will take 5 seconds before publishing the first reading.");
}
void loop() {
  //Send an HTTP POST request every 10 minutes
  if ((millis() - lastTime) > timerDelay) {
    //Check WiFi connection status
    if(WiFi.status() == WL_CONNECTED){
      HTTPClient http;
      String serverPath = serverName;
      // Your Domain name with URL path or IP address with path
      http.begin(serverPath.c_str());

      // Send HTTP GET request
      int httpResponseCode = http.GET();
      if (httpResponseCode>0) {

        String payload = http.getString();
        //Serial.println(payload);

        JSONVar myObject = JSON.parse(payload);
        //JSONVar keys = myObject.keys();

        Serial.print(myObject["result"]);

        if(int(myObject["result"]) == 1) {
          digitalWrite(led1, HIGH);
        } else {
          digitalWrite(led1, LOW);
        }
        if(int(myObject["result"]) == 2) {
          digitalWrite(led2, HIGH);
        } else {
          digitalWrite(led2, LOW);
        }
      } else {
        Serial.print("Error code: ");
        Serial.println(httpResponseCode);
      }
      http.end();
    } else {
      Serial.println("WiFi Disconnected");
    }
    lastTime = millis();
  }
}