int in1 ;
int in2 ;

void setup() {

  pinMode(3, INPUT);
  pinMode(0, INPUT);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
}
void loop() {

  in1 = digitalRead(3) ; //スイッチの状態を読む
  in2 = digitalRead(0);


  if (in1 == HIGH)
  {
    if (in2 == HIGH)
    {
      digitalWrite(19, HIGH);
      digitalWrite(18, LOW);

      digitalWrite(16, HIGH);
      digitalWrite(15, LOW);
    }
    else
    {
      digitalWrite(19, HIGH);
      digitalWrite(18, LOW);

      digitalWrite(16, LOW);
      digitalWrite(15, HIGH);
    }
  }
  else if (in2 == HIGH)
  {
    digitalWrite(19, LOW);
    digitalWrite(18, HIGH);

    digitalWrite(16, HIGH);
    digitalWrite(15, LOW);
  }
  else {
    digitalWrite(19, LOW);
    digitalWrite(18, HIGH);

    digitalWrite(16, LOW);
    digitalWrite(15, HIGH);
  }



}
