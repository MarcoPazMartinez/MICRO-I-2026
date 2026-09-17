void setup() {
  Serial.begin(9600);

  for (int i = 1; i <= 5; i++) {

    if (i == 1) {
      Serial.print("    *");
    }

    if (i == 2) {
      Serial.print("   ***");
    }

    if (i == 3) {
      Serial.print("  *****");
    }

    if (i == 4) {
      Serial.print(" *******");
    }

    if (i == 5) {
      Serial.print("*********");
    }

    Serial.println();
  }
}

void loop() {
}
