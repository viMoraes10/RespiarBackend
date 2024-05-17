int mq135Pin = A0;
int valorNormal = 675; // Média dos valores normais
int limiar = 550; // Valor definido como alerta

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(mq135Pin);
  Serial.print("Valor do Sensor MQ-135: ");
  Serial.println(sensorValue);

  if(sensorValue < limiar) {
    Serial.println("Alerta: Detecção de alta concentração de gases!");
  }
  
  delay(1000);
}
