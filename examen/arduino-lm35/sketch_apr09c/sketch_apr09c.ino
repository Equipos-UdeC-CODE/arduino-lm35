#define TEMP_SENSOR 0
//#define LED_RED 13
//#define LED_GREEN 12
void setup() {
  Serial.begin(9600);
    //pinmode(LED_RED, OUTPUT);
    //pinmode(LED_GREEN, OUTPUT);


}

int signalvoltage, celsiusTemp;
void loop() {
  signalvoltage = analogRead(TEMP_SENSOR);
  celsiusTemp = (5* signalvoltage * 100) / 1024;

  Serial.println(celsiusTemp);
  delay(500);

}
