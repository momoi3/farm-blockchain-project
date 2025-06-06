void setup() {
  Serial.begin(9600);
}

void loop() {
  // Simulate moisture and temperature data
  int moisture = random(40, 60); // pretend soil moisture
  float temp = random(250, 300) / 10.0; // pretend temp 25.0 - 30.0

  // Simulate sending a JSON payload
  String payload = "{ \"deviceID\": \"node01\", \"moisture\": " + String(moisture) + ", \"temp\": " + String(temp) + " }";

  Serial.println(payload);  // This will show what would be sent via LoRa
  delay(5000);              // Wait 5 seconds
}
