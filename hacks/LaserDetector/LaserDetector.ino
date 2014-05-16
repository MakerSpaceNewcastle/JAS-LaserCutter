const int laserPin = 7;
const int ledPin = 13;

int buttonPushCounter = 0;
int laserState = 0;
int lastlaserState = 0;

void setup() {
  pinMode(laserPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  laserState = !digitalRead(laserPin);
  if (laserState != lastlaserState) {
    if (laserState == HIGH) {
      buttonPushCounter++;
      Serial.println("IMMA FIRIN' MAH LAZER!!!!");
      Serial.print("number of pules:  ");
      Serial.println(buttonPushCounter);
    } 
    else {
      Serial.println("IMMA CHARGN' MAH LAZER."); 
    }
  }
  digitalWrite(ledPin, laserState);
  lastlaserState = laserState;
}
