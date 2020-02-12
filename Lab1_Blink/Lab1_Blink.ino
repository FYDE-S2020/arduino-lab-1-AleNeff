#define LED_PIN 2

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void dimmer(int freq, int duty) {
    int period, onTime, offTime;
    period = 1000/freq;
    onTime = period * duty / 100;
    offTime = period - onTime;
    digitalWrite(LED_PIN, HIGH);
    delay(onTime);
    digitalWrite(LED_PIN, LOW);
    delay(offTime);
}

void timedBlink(int interval) {
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);                       // wait for a second
}

void loop() {
  for(int f = 100; f>0; f-=10){
  for(int i=0; i<100; i++){
  dimmer(f, i);
  }
  for(int i=100; i>0; i--){
  dimmer(f, i);
  }
  }
}
