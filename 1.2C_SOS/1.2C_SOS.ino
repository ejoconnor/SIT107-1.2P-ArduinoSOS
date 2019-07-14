//time variables so that time values can be changed without having to change every iterance throughout the code
int(t1) = 500;
int(t2) = 1000;

//the letter S in morse code
void s(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(t1);
  digitalWrite(LED_BUILTIN, LOW);
  delay(t1);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(t1);
  digitalWrite(LED_BUILTIN, LOW);
  delay(t1);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(t1);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  }

//the letter O in morse code
void o(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(t2);
  digitalWrite(LED_BUILTIN, LOW);
  delay(t2);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(t2);
  digitalWrite(LED_BUILTIN, LOW);
  delay(t2);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(t2);
  digitalWrite(LED_BUILTIN, LOW);
  delay(t2);
  }
  
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  s();
  o();
  s();
  delay(2000);

}
