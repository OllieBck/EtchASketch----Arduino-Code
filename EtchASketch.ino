//this code was adapted slightly from the examples on duplex communication
//between p5.js and Arudino provided here: https://itp.nyu.edu/physcomp/labs/labs-serial-communication/two-way-duplex-serial-communication-using-p5js/

void setup() {
  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (Serial.available() <= 0) {
    Serial.println("hello");
    delay(300);
  }
  //pinMode(switchPin, INPUT);
}


void loop() {
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    int sensorValue = analogRead(A0);
    Serial.print(sensorValue);
    Serial.print(",");

    sensorValue = analogRead(A1);
    Serial.println(sensorValue);

  }
}
