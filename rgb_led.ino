//rgb led software controller
//ima li to smisla
int red =3;
int green =5;
int blue =6;

void setup() {
  // put your setup code here, to run once
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  analogWrite(red,100);
  analogWrite(blue,100);
  analogWrite(green,100);
  

  
}
