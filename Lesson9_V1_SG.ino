const int sensorPin = A0;
const int LEDPin = 10;



int lightAmount = 0;
long timerLED = 0;
long timerSensor = 0;
int toggleLED = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  transmitter();

  reciever();

}

void transmitter() {
  if (millis() >= timerLED + 2000) {
    toggleLED = !toggleLED;
    digitalWrite(LEDPin, toggleLED);
    timerLED = millis();
  }
}

void reciever () {
  if (millis() >= timerSensor + 100) {
    lightAmount = analogRead(sensorPin);

  Serial.print("Light Intensity: ");
  Serial.println(lightAmount);
  }
}
