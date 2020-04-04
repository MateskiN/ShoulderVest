int LEFT = 10;
int RIGHT = 11;
int STOP = 13;
int BUTTONL = 4;
int BUTTONR = 5;
int MAGNET = 6;



void setup() {
  pinMode(LEFT,OUTPUT);
  pinMode(RIGHT,OUTPUT);
  pinMode(STOP,OUTPUT);
  pinMode(BUTTONL,INPUT);
  pinMode(BUTTONR,INPUT);
  pinMode(MAGNET,INPUT);

}

void loop() {
  if(digitalRead(BUTTONL) == HIGH)
  {
    digitalWrite(RIGHT,LOW);
    digitalWrite(LEFT,HIGH);
    delay(300);
    digitalWrite(LEFT,LOW);
    delay(300);
  }else
  {
    digitalWrite(LEFT,LOW);
  }
  if(digitalRead(BUTTONR) == HIGH)
  {
    digitalWrite(LEFT,LOW);
    digitalWrite(RIGHT,HIGH);
    delay(300);
    digitalWrite(RIGHT,LOW);
    delay(300);
  }else
  {
    digitalWrite(RIGHT,LOW);
  }

  if(digitalRead(MAGNET) == HIGH)
  {
  digitalWrite(STOP,HIGH);
  }
  else
  {
  digitalWrite(STOP,LOW);
  }
}
