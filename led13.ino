int led1=4;//led1은 4번 핀에 연결됨 led긴다리가 plus에 연결됨
 // the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led1, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(10);                       // wait for a second
}
