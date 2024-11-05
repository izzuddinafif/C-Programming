#include <SoftwareSerial.h>
#define enTxPin 4   // HIGH: TX and LOW: RX 
SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  Serial.println("Starting System");

  mySerial.begin(9600);

  pinMode(enTxPin, OUTPUT);
  digitalWrite(enTxPin, LOW);       // default RX
}

void loop() {
  if (mySerial.available()) {
    String dataIN = "";

    dataIN = mySerial.readStringUntil('%');
    Serial.println(dataIN);

    if (dataIN.substring(0,3) == "GET"){
      Serial.println("kirim data ke master");
      digitalWrite(enTxPin, HIGH);       // change pin to HIGH for TX
      String dataOUT = "jarak1#50#jarak2#35%";
      mySerial.print(dataOUT);
      digitalWrite(enTxPin, LOW);       // default RX
    }
  }

  delay(10);
}