// Smart Farming Monitoring System

int soilSensor = A0;
int motionSensor = 2;

void setup() {
  Serial.begin(9600);
  pinMode(motionSensor, INPUT);
}

void loop() {

  int soilValue = analogRead(soilSensor);
  int motionValue = digitalRead(motionSensor);

  Serial.print("Soil Moisture: ");
  Serial.println(soilValue);

  if(motionValue == HIGH) {
    Serial.println("Motion detected!");
  }

  delay(2000);
}







