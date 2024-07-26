//Programa: Teste de Display LCD 16 x 2
//Autor: MakerHero
 
//Carrega a biblioteca LiquidCrystal 
//Define os pinos que serão utilizados para ligação ao display
int ButtonState1 = 0;
int ButtonState2 = 0;
int ButtonState3 = 0;
int BuzzerPin = 5;
int ledPin1 = 11;
int ledPin2 = 12;
int ledPin3 = 13;
 
void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  ButtonState1 = digitalRead(2);
  ButtonState2 = digitalRead(3);
  ButtonState3 = digitalRead(4);

  if(ButtonState1 == HIGH){
    digitalWrite(ledPin1, HIGH);
    tone(BuzzerPin, 600);
  }
  else{
    digitalWrite(ledPin1, LOW);
    noTone(BuzzerPin);
  }
  if(ButtonState2 == HIGH){
    digitalWrite(ledPin2, HIGH);
    tone(BuzzerPin, 1200);
  }
  else{
    digitalWrite(ledPin2, LOW);
    noTone(BuzzerPin);
  }
  if(ButtonState3 == HIGH){
    digitalWrite(ledPin3, HIGH);
    tone(BuzzerPin, 1800);
  }
  else{
    digitalWrite(ledPin3, LOW);
    noTone(BuzzerPin);
  }

}