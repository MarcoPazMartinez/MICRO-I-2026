void setup() {
  Serial.begin(9600);

  Serial.print("valor int = ");
  Serial.println(sizeof(int));

  Serial.print("valor char = ");
  Serial.println(sizeof(char));

  Serial.print("valor de float = ");
  Serial.println(sizeof(float));

  Serial.print("valor unsigned int = ");
  Serial.println(sizeof(unsigned int));

  Serial.print("valor long int = ");
  Serial.println(sizeof(long int));

  Serial.print("Valor double = ");
  Serial.println(sizeof(double));
}

void loop() {
}
