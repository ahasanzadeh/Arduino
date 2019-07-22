void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  DDRD = DDRD | B00111100;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  PORTD = PORTD | B00111100;
  delay(1000);
  digitalWrite(13,LOW);
  PORTD = PORTD & B11000011;
  delay(1000);
}
