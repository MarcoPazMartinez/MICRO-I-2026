bool esPrimo(int numero) {

  if (numero < 2) {
    return false;
  }

  for (int i = 2; i < numero; i++) {
    if (numero % i == 0) {
      return false;
    }
  }

  return true;
}

void setup() {
  Serial.begin(9600);

  Serial.println("Numeros primos del 0 al 99:");

  for (int i = 0; i < 100; i++) {
    if (esPrimo(i)) {
      Serial.println(i);
    }
  }
}

void loop() {
}
