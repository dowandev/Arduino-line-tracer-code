// void setup() {  
//   pinMode(5, OUTPUT); //핀 설정
//   Serial.begin(9600);
// }

// void loop() {
//   Serial.println("밝기=255");
//   analogWrite(5,255);
//   delay(1000);
//   Serial.println("밝기=100");
//   analogWrite(5,100);
//   delay(1000);
//   Serial.println("밝기=0");
//   analogWrite(5,0);
//   delay(1000);




//   digitalWrite(7,HIGH);
//   delay(100);
//   digitalWrite(7,LOW);
//   delay(100);

// }


#define LS 7
#define RS 8

void setup() {
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(9, INPUT);
  
}


void loop() {
  int R=digitalRead(RS);
  int L=digitalRead(LS);

  if(L==0 & R==0) {
    analogWrite(3,160);
    analogWrite(5,0);
    analogWrite(6,160);
    analogWrite(9,0);
  }

  else if(L==0 && R==1) {
    analogWrite(3, 160);
    analogWrite(5, 0);
    analogWrite(6, 100);
    analogWrite(9, 0);
  }

  else if(L==1 && R==0) {
    analogWrite(3, 100);
    analogWrite(5, 0);
    analogWrite(6, 160);
    analogWrite(9, 0);
  }

  else if(L==1 && R==1) {
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
  }
}
