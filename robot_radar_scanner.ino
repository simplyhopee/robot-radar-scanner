#include <Servo.h>

#define TRIG_PIN 5
#define ECHO_PIN 6
#define SERVO_PIN 2

Servo radarServo;

long getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  long distance = duration * 0.034 / 2;

  return distance;
}

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  radarServo.attach(SERVO_PIN);

  Serial.begin(9600);

  Serial.println("=== ROBOT RADAR SCANNER ===");
}

void loop() {

  // Sweep Left to Right
  for(int angle = 15; angle <= 165; angle += 5) {

    radarServo.write(angle);
    delay(150);

    long distance = getDistance();

    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print("°  |  Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }

  // Sweep Right to Left
  for(int angle = 165; angle >= 15; angle -= 5) {

    radarServo.write(angle);
    delay(150);

    long distance = getDistance();

    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print("°  |  Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}
