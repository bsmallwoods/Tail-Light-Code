int greenLED = 13;
int blueLED = 12;
int yellowLED = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH); 
  delay(500); 
  digitalWrite(blueLED, HIGH); 
  delay(500); 
  digitalWrite(yellowLED, HIGH);
  delay(500);                  
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(yellowLED, LOW);
 
  delay(1000); 
}
