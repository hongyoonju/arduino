int led1=13;//led1은 13번 핀에 연결됨 led긴다리가 plus에 연결됨

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led1, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
