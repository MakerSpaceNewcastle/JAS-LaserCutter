const uint8_t laserPin = 7;
const uint8_t ledPin = 13;

uint16_t laserCounter = 0;
uint8_t laserState = 0;
uint8_t lastlaserState = 0;

void setup()
{
  pinMode(laserPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  laserState = !digitalRead(laserPin);

  if(laserState != lastlaserState)
  {
    digitalWrite(ledPin, laserState);
    lastlaserState = laserState;

    if(laserState == HIGH)
    {
      laserCounter++;
      Serial.println("IMMA FIRIN' MAH LAZER!!!");
      Serial.print("count:  ");
      Serial.println(laserCounter);
    } 
    else
    {
      Serial.println("IMMA CHARGIN' MAH LAZER."); 
    }
  }
}
