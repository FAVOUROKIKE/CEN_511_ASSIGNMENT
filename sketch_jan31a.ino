void setup() {
  // put your setup code here, to run once:
// initializes serial communication with a speed of 9600 bit/s
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 // send a message to the serial port
 Serial.println("Hello my name is OKIKE FAVOUR(16CJ020754)");
 // wait for 3 seconds and then start over
 delay(5000);


}
