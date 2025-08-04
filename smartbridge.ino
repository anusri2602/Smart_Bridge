#include <Servo.h>

const int i = D1;
const int s1 = D2;
const int s2 = D3;

Servo myservo1;
Servo myservo2;

void setup() {
  pinMode(i, INPUT);
  myservo1.attach(s1);
  myservo2.attach(s2);
  Serial.begin(9600);
}

void loop() {
  int a = digitalRead(i);

  if (a == 1) {
    myservo1.write(180);
    myservo2.write(180);
  } else {
    myservo1.write(0);
    myservo2.write(0);
  }
}
