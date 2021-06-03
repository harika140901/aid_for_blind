int distance=0;
long duration;
int TRIG=7;
int ECHO=4;
void setup() {
   Serial.begin(57600);
  pinMode(10,OUTPUT);
 
}

void loop() {
  pinMode(TRIG,OUTPUT);
    pinMode(ECHO,INPUT);
digitalWrite(TRIG,LOW);
delayMicroseconds(2);
digitalWrite(TRIG,HIGH);
delayMicroseconds(10);
digitalWrite(TRIG,LOW);

duration=pulseIn(ECHO,HIGH);
distance=(duration/2)*0.034;
if(distance<=10&&distance>0){
  int d= map(distance, 1, 100, 20, 2000);   
  digitalWrite(10, HIGH);   
  delay(100);   
  digitalWrite(10, LOW);   
  delay(d);  

}


}
