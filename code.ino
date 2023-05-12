#define MQ3 A0
 #define Buzzer 8
 #define LED 9
 #define Thres_Val 250
 int value;
 int motorPin=7;
 void setup() 
 {
   pinMode(MQ3, INPUT);
   pinMode(Buzzer, OUTPUT);
   pinMode(LED, OUTPUT);
   pinMode(7,OUTPUT);
   Serial.begin(9600);
 }
 void loop() 
 {
   value = analogRead(MQ3);
   Serial.println(value);
 if ( value > Thres_Val )   
 {
     digitalWrite ( LED , HIGH );
     digitalWrite ( 7 , LOW);
     digitalWrite(Buzzer,HIGH);
 }
 else
 {
     digitalWrite(LED, LOW);
     digitalWrite(7, HIGH);
     digitalWrite(Buzzer,LOW);
 }
 delay (100);            
 }
