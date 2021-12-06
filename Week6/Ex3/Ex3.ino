void setup() {
  // put your setup code here, to run once:
  DDRG = 0b00100000;     //PG5 (pin 4 on arduino mega) OC0B
  OCR0A = 5;             //top value is 5
  OCR0B = 2.5;           //50% duty cycle
  TCCR0A = 0b00100011;   //Normal output channel B, Fast PWM OCR0A(5) top
  TCCR0B = 0b00001001;   //1 pre-scaler
}

void loop() {
  // put your main code here, to run repeatedly:

}
