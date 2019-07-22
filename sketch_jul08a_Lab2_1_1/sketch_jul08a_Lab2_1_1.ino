void setup() {
  // put your setup code here, to run once:
  //E: pin 12 Arduino
  //RS: pin 11 Arduino
  //RW: pin 10 Arduino
  //D7: pin 9 Arduino  
  //D6: pin 8 Arduino
  //D5: pin 7 Arduino 
  //D4: pin 6 Arduino
  //D3: pin 5 Arduino
  //D2: pin 4 Arduino
  //D1: pin 3 Arduino
  //D0: pin 2 Arduino

  delay(20);//wait 15ms
  
  DDRB = DDRB | B00011111;//Direction Output
  DDRD = DDRD | B11111100;//Direction Output

  //PORTB = PORTB & B00000000;//make al output zero
  //PORTD = PORTD & B00000000;//make al output zero
    
  PORTB = PORTB & B11110000;
  PORTD = PORTD | B11000000;

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E
  
  delay(5);//wait 4.1ms
  
  PORTB = PORTB & B11110000;
  PORTD = PORTD | B11000000;  
  
  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E
  
  delayMicroseconds(200);//wait 100us

  PORTB = PORTB & B11110000;
  PORTD = PORTD | B11000000; 

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E
  
  PORTB = PORTB & B11110000;
  PORTD = (PORTD | B11100000)& B11101111;//N=1, two lines F=0 5x8 dots

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E

  PORTB = PORTB & B11110000;//Display off
  PORTD = (PORTD | B00100000)& B00100011;  

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E

  PORTB = PORTB & B11110000;//Display clear
  PORTD = (PORTD | B00000100)& B00000111;  

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E
  
  PORTB = PORTB & B11110000;//Entry mode set
  PORTD = (PORTD | B00010000)& B00010011;//I/D=0, S=0 

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E

  PORTB = PORTB & B11110000;//Display on, cursor on, blinking on
  PORTD = (PORTD | B00111000)& B00111011;  

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E  

  PORTB = (PORTB | B00001001) & B11111001;//Display on, cursor on, blinking on
  PORTD = (PORTD | B01000000)& B01000011;  

  PORTB = PORTB | B00010000;//set E
  delayMicroseconds(100);//wait 100us
  PORTB = PORTB & B11101111;//reset E 
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
