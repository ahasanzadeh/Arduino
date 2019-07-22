// Example 1 - Receiving single characters

char receivedChar;
boolean newData = false;

void setup() {
    Serial.begin(9600);
    Serial.println("<Arduino is ready>");
}

void loop() {
    recvOneChar();
    showNewData();
}

void recvOneChar() {
    if (Serial.available() > 0) {
        receivedChar = Serial.read();
        newData = true;
    }
}

void showNewData() {
  char buf[30];
  //const char *first = "sent ";
  const char *second = "X";
  strcpy(buf,&receivedChar);
  strcat(buf,second);
    if (newData == true) {
        Serial.print("This just in ... ");
        Serial.println(buf);
        newData = false;
    }
}
