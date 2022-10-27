const int tiltSwitch = A0;
int closed;
const int yellow = 2;
const int red = 3;
const int orange = 4;
const int blue = 5;
const int purple = 6;
const int green = 7;

void setup() {
// setup pinmode for each color
Serial.begin(9600) ;
pinMode(yellow, OUTPUT);
pinMode(orange, OUTPUT);
pinMode(red, OUTPUT);
pinMode(purple, OUTPUT);
pinMode(green, OUTPUT) ;
pinMode(blue, OUTPUT);
}
void loop() {
// if the fingers are down, the lights turn on
closed = analogRead(tiltSwitch);
if (closed <50){
digitalWrite(yellow, HIGH);
digitalWrite(red, HIGH) ;
digitalWrite (orange, HIGH);
digitalWrite(blue, HIGH) ;
digitalWrite(purple, HIGH) ;
digitalWrite(green, HIGH);
}
else {
digitalWrite(yellow, LOW);
digitalWrite(red, LOW) ;
digitalWrite (orange, LOW);
digitalWrite(blue, LOW) ;
digitalWrite(purple, LOW) ;
digitalWrite(green, LOW);
}
}
