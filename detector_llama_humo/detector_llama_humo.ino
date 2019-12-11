/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/
#define sensorLlama A0  //Pin para el sensor analogico de llamas
#define sensorHumo A1   //Pin para el sensor analogico de humo (monoxido de carbono)
#define intIncendio 2   //Pin para interrupción por fuego   
bool det = false;
unsigned long previousMillis = 0;

void setup() {
  Serial.begin(115200);
  attachInterrupt(digitalPinToInterrupt(intIncendio), deteccion, RISING);
}

void deteccion(){
    det = true;
}

void loop() {

  unsigned long currentMillis = millis();

  if ((det && (currentMillis - previousMillis >= 2000)) || (currentMillis - previousMillis >= 5000)){    
    previousMillis = currentMillis;
    int Llama = analogRead(sensorLlama);
    int MonoxidoCarbono = analogRead(sensorHumo);
    Serial.print("Sensor de llama: ");
    Serial.println(Llama);
    Serial.print("Sensor de Humo: ");
    Serial.println(MonoxidoCarbono);
    if (det) {
    Serial.println("¡¡¡ALERTA!!! Posible Incendio Forestal");
  }
  det = false;
    }
  //delay(5000);
}
