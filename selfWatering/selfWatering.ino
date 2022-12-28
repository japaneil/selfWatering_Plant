float moisture;
float level;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
moisture=analogRead(A0);
//Serial.println(moisture);
while(moisture>650){    //pump will turn on when soil is dry
  digitalWrite(7,HIGH); 
  if(moisture<500){     //pump will turn off when the soil is wet
    digitalWrite(7,LOW);
  }
}

level=analogRead(A1);
if(level=>550){
  digitalWrite(8,HIGH);
  if(level<300){
    digitalWrite(8,LOW);
  }
}
}
