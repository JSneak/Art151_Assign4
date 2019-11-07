// LED Pressure Game with Force Sensitive Resistor


const int blue = 11;

const int FSR = 0; // FSR connected to analog pin 0

int level = 0; // variable for the level of force applied to the FSR

void setup() // run once to setup
{

pinMode (blue, OUTPUT);

//analog pins are automatically set to input

}

void loop() // repeated routine

{
// first, read the pressure level

int level = analogRead(FSR);

//next, light up the LEDS according to pressure

if (level > 1) {
Serial.println(" - No pressure");
analogWrite (blue, level);

}

//Next tell it to turn off all lights if level = 0

if(level == 0) {

digitalWrite (blue, LOW);

}

}
