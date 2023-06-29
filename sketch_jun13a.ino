#define LS 7
#define RS 8


void setup() {
pinMode(LS,INPUT);
pinMode(RS,INPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {
 int R=digitalRead(RS);
 int L=digitalRead(LS);
 if(L==0 && R==0)
 {
  analogWrite(3,150);
  analogWrite(5,0);
  analogWrite(6,150);
  analogWrite(9,0);
 }

else if(L==0 && R==1)
 {
  analogWrite(3,150);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
 }

else if(L == 1 && R == 0)
 {
  analogWrite(3,100);
  analogWrite(5,0);
  analogWrite(6,150);
  analogWrite(9,0);
 }

else if(L==1 && R==1)
 {
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
}
}
