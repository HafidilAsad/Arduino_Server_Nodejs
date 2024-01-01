#include<time.h>
void setup() {
  srand(time(NULL));
  Serial.begin(115200);
}
void loop() {
  String data = "weighting = " + String(rand()%40) + " adc = " + String(rand()%255) + " milivolt = " + String(rand()%50);
  Serial.print(data);
  delay(1000);
}
