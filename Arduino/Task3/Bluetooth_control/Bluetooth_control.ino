#define trig 11 
#define echo 12 

int distance,t; 

void setup() {
  pinMode(trig, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echo, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600);
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  // Sets the trigPin HIGH for 10 microseconds
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  t = pulseIn(echo, HIGH);
  // Calculating the distance
  distance = t /57 ;

  if (distance<10)
  Serial.println("Too close");
  else 
  Serial.println("Safe");
  delay(500);
}
