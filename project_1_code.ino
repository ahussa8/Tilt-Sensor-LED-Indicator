const int tiltPin = 13;
const int greenPin = 2;
const int redPin = 8;
void setup() {
    pinMode(tiltPin, INPUT_PULLUP);  
    pinMode(greenPin, OUTPUT);
    pinMode(redPin, OUTPUT);
    Serial.begin(9600);      

} 

void loop() {
    int tiltState = digitalRead(tiltPin);  
    if (tiltState == LOW) {
        Serial.println("TILT");
        digitalWrite(greenPin,HIGH);
        digitalWrite(redPin,LOW);

    } else {
        Serial.println("NO TILT");
        digitalWrite(greenPin,LOW);
        digitalWrite(redPin,HIGH); 

    }

    delay(100); 
}