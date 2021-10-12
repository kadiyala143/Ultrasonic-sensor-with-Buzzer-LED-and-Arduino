
/* Dveloped by Sai Nikhil Kadiyala  */



const int trigger = 5;  // The trigger pin of ultrasonic sensor
const int echo = 6;     // The echo pin of ultrasonic sensor
const int LED1 = 10;    // First LED bulb connection 
const int LED2 = 11;   // Second LED bulb connection 
const int LED3 = 12;   // Third LED bulb connection 
const int buzzer = 9;  // Buzzer connection

long duration;
int distance;


void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(5, LOW);
delay(2);
digitalWrite(5, HIGH);
delay(10);
digitalWrite(5, LOW);



duration = pulseIn(6, HIGH);

distance = (duration *0.034/2);




 


if (distance <= 10){
  tone(9, 1000);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
else{
  noTone(9);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
}

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
