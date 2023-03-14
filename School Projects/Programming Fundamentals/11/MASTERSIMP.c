#include <SoftwareSerial.h>
#define enTxPin 3   // HIGH: TX and LOW: RX 
SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  Serial.println("Starting System");

  mySerial.begin(9600);

  pinMode(enTxPin, OUTPUT);
  digitalWrite(enTxPin, HIGH);       // default TX
}

void loop() {
  mySerial.print("GET%");
  digitalWrite(enTxPin, LOW);       // change pin to RX
  unsigned long timeLimit = millis();
  Serial.println("waiting data");
  while (millis() - timeLimit < 3000) {
    if (mySerial.available()) {
      String dataIN = "";

      dataIN = mySerial.readStringUntil('%');
      Serial.println(dataIN);
      digitalWrite(enTxPin, HIGH);       // default TX
      break;
    }
  }
  Serial.println("waiting loop");
  Serial.println();
  delay(5000);
}