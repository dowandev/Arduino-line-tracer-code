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
 if(LS==1 && RS==1)
 {
   analogWrite(3,200);
   analogWrite(5,0);  
   analogWrite(6,200);
   analogWrite(9,0);
 }

else if(LS==1 && RS==0)
 {
   analogWrite(3,200);
   analogWrite(5,0);  
   analogWrite(6,100);
   analogWrite(9,0);
 }

else if(LS==0 && RS==1)
 {
   analogWrite(3,100);
   analogWrite(5,0);  
   analogWrite(6,200);
   analogWrite(9,0);
 }

else
 {
   analogWrite(3,0);
   analogWrite(5,0);  
   analogWrite(6,0);
   analogWrite(9,0);
 }




}
