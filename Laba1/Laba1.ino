// C++ code
//Лаба 1 по алгоритмизации

void setup() {
  Serial.begin(9600);
}
void loop() {
 if (Serial.available()) {
    float val = Serial.parseInt();
    // прямая с углом 45
    if (val > -40 && val < -1)
    {
      float y = val + 1;
      Serial.println(y);
    }
    // прямая на оси х
    if (val >= -1 && val <= 1)
    {
      Serial.println("0");
    }
    // окружность
     if (val > 1 && val <= 5) 
    {
      float y = sqrt(4 - ((val - 3)*(val - 3)));
      Serial.println(y);
    }
    // прямая по двум точкам
    if (val > 5 && val <= 70)
    {
      float y = ((5 - val)/5);
      Serial.println(y);
    }
  }
}

