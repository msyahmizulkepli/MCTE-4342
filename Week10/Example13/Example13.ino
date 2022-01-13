char DriveSteps[] = {1, 2, 4, 8}; //Activation pattern of wave drive
char position = 0;
unsigned long last;               //Stores last time the motor moved

void setup() {
  // put your setup code here, to run once:
  DDRB = 0b00001111; //Set the 4 pins as output
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long now = millis();
  if (now - last >= 2)
  {
    PORTB = DriveSteps[position];
    position--;
    if (position < 0)
    {
      position = 3;
    }
    last = now;
  }

}
