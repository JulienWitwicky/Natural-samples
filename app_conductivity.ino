void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float time = micros() / 1e6;
  int conductivity = analogRead(A0);
  delay (100);

  Serial.print(time);
  Serial.print(", ");
  Serial.println(conductivity);
}
