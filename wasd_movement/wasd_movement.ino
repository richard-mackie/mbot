int incomingByte = 0; // for incoming serial data

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    if (incomingByte == 'w'){
      Serial.print("Forward");
      Serial.println();
    }
    if (incomingByte == 's'){
      Serial.print("Backward");
      Serial.println();
    }
    if (incomingByte == 'a'){
      Serial.print("Left");
      Serial.println();
    }
    if (incomingByte == 'd'){
      Serial.print("Right");
      Serial.println();
    }
  }
}
