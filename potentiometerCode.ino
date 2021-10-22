//variable declaration
int pot_Switch = A0;
int resValue= 0;
int redLed = 11, redLed2 = 10, 
    yellowLed = 9, yellowLed2 = 6, 
    greenLed = 5 ,greenLed2 = 3;

void setup() {
  pinMode(pot_Switch, INPUT); //potentiometer switch is the input
  pinMode(redLed, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(yellowLed2, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(greenLed2, OUTPUT);
  Serial.begin(9600);
}

void loop() {

resValue= analogRead(pot_Switch);  //resValue is the analog signal from potentiometer switch

if(resValue < 170){
  digitalWrite(redLed, HIGH);   //<170 then only first LED shines bright
  digitalWrite(redLed2, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(yellowLed2, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greenLed2, LOW);
 }
 else if(resValue > 170 && resValue < 340){
  digitalWrite(redLed, HIGH); 
  digitalWrite(redLed2, HIGH);        //>170 and <340 then first 2 LEDs shine bright
  digitalWrite(yellowLed, LOW);
  digitalWrite(yellowLed2, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greenLed2, LOW);
 }
 else if(resValue > 340 && resValue < 510){
  digitalWrite(redLed, HIGH);
  digitalWrite(redLed2, HIGH);
  digitalWrite(yellowLed, HIGH);      //>340 and <510  then first 3 LEDs shine bright
  digitalWrite(yellowLed2, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greenLed2, LOW);
 }
 else if(resValue > 510 && resValue < 680){
  digitalWrite(redLed, HIGH);
  digitalWrite(redLed2, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(yellowLed2, HIGH);     //>510 and <680 then first 4 LEDs shine bright
  digitalWrite(greenLed, LOW);
  digitalWrite(greenLed2, LOW);
 }
 else if(resValue > 680 && resValue < 850){
  digitalWrite(redLed, HIGH); 
  digitalWrite(redLed2, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(yellowLed2, HIGH);
  digitalWrite(greenLed, HIGH);     //>680 and <850  then first 5 LEDs shine bright
  digitalWrite(greenLed2, LOW);
 }
 else{
  digitalWrite(redLed, HIGH);
  digitalWrite(redLed2, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(yellowLed2, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(greenLed2, HIGH);    // else >850 then all 6 LEDs shine bright
 }
 
}
