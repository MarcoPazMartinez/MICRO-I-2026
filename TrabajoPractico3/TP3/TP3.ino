void setup() {
  Serial.begin(9600);

  for (int fila = 1; fila <= 10; fila++){
    
    for (int columna = 1; columna <= 10; columna++) {

      if (fila == 1){
        Serial.print("*");
      }
      else if (fila == 10){
        Serial.print("*");
      }
      else if (columna == 1){
        Serial.print("*");
      }
      else if (columna == 10){
        Serial.print("*");
      }
      else {
        Serial.print(" ");
      }
    }

    Serial.println();
  

  }
}
void loop() {
}
