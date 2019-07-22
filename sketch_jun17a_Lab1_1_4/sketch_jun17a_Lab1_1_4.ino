void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  DDRD = DDRD | B00111100;
//int sensorValue =0; 
}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(13,HIGH);
  int sensorValue;
  sensorValue = ( analogRead(A0)>>6 ) & B00001111;
  sensorValue = (sensorValue<<2) & B00111100;
  PORTD = (PORTD | sensorValue) & sensorValue;
//  delay(analogRead(A0));
//  digitalWrite(13,LOW);
//  PORTD = PORTD & sensorValue;
//  delay(analogRead(A0));
}
