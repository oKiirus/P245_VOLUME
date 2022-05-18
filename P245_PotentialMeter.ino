const byte buzzer_gpio = 18;
#define PotPin 15;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PotPin, INPUT);
  pinMode(buzzer_gpio, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(PotPin);
  int brightness = map(analogValue, 0, 4095, 0, 255);
  if(brightness > 200){
     Serial.println("Decrease Volume");
     digitalWrite(buzzer_gpio, HIGH)
     delay(100); 
  }
   Serial.println(brightness);
     digitalWrite(buzzer_gpio, LOW)
     delay(30);
}
