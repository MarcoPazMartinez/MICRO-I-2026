const int pinBoton = 2;  
const int pinLed = 13;    

void setup() {
  pinMode(pinBoton, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);        
}

void loop() {
  int estadoBoton = digitalRead(pinBoton);

 
  if (estadoBoton == LOW) {
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed, LOW);  
  }
}
