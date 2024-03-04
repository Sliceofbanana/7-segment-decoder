void setup() {
  // TODO: put your setup code here, to run once:
   //output
  DDRD |= 0xFC;//1111 1100
  DDRC |= 0x03;//0000 0011
   //input
  PORTB |= 0x30;//0011 0000
 
}

void loop() {
  // TODO: put your main code here, to run repeatedly:
  int input = PINB & 0x0F;
  if (((PINB & 0x20) == 0)) {
    PORTD = 0xFC;
    PORTC = 0x03;
  }
  else if (((PINB & 0x10) == 0)&&(input == 0)) {
    PORTD = 0x00;
    PORTC = 0x00;
  }
  else {
    switch (input) {
      case 0:
        PORTD = 0xFC;
        PORTC = 0x02;
        break;
      case 1:
        PORTD = 0x18;
        PORTC = 0x02;
        break;
      case 2:
        PORTD = 0x6C;
        PORTC = 0x03;
        break;
      case 3:
        PORTD = 0x3c;
        PORTC = 0x03;
        break;
      case 4:
        PORTD = 0x98;
        PORTC = 0x03;
        break;
      case 5:
        PORTD = 0xB4;
        PORTC = 0x03;
        break;
      case 6:
        PORTD = 0xF4;
        PORTC = 0x03;
        break;
      case 7:
        PORTD = 0x1C;
        PORTC = 0x02;
        break;
      case 8:
        PORTD = 0xFC;
        PORTC = 0x03;
        break;
      case 9:
        PORTD = 0x9C;
        PORTC = 0x03;
        break;
      default:
        PORTD = 0x00;
        PORTC = 0x02;
        break;
    }
  }
}