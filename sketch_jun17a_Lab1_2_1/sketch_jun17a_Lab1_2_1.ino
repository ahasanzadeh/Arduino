void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hello World!");
  //Serial.println("H");
  //Serial.println("Hello World!\n");
  //Serial.println("<Hello World!>");
  //Serial.println("234\n");
  //Serial.println("<Amin, 42, 5.8>");
  //Serial.println("<24y>");
  Serial.println("A");
  delay(5000);
  if (Serial.available()>0){
    Serial.write(Serial.read());
    }
}
