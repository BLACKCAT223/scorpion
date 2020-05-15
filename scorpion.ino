int GNDPin=A4;
int VccPin=A5;
int xPin=A3;
int yPin=A2;
int zPin=A1; 
int Q1=10,Q2=11,Q3=12,Q4=13;

void setup() { 
  Serial.begin(9600); 
  pinMode(Q1,OUTPUT); 
  pinMode(Q2,OUTPUT); 
  pinMode(Q3,OUTPUT); 
  pinMode(Q4,OUTPUT); 
  pinMode(GNDPin, OUTPUT); 
  pinMode(VccPin, OUTPUT); 
  digitalWrite(GNDPin, LOW);
  digitalWrite(VccPin, HIGH);
}
void loop() { 
xPin = analogRead(xPin);
yPin = analogRead(yPin);
zPin = analogRead(zPin);

if(xPin<340);
else if(xPin>400); 
else if(yPin>400);
else if(yPin<340);
else stop_(); 
} 

void stop_() { 
  Serial.println(""); 
  Serial.println("STOP"); 
  digitalWrite(Q1,LOW); 
  digitalWrite(Q2,LOW); 
  digitalWrite(Q3,LOW); 
  digitalWrite(Q4,LOW); 
    } 

void forward() { 
  Serial.println(""); 
  Serial.println("Forward"); 
  digitalWrite(Q1,HIGH); 
  digitalWrite(Q2,LOW); 
  digitalWrite(Q3,HIGH); 
  digitalWrite(Q4,LOW); 
  } 

void backward() { 
  Serial.println(""); 
  Serial.println("Backward"); 
  digitalWrite(Q1,LOW); 
  digitalWrite(Q2,HIGH); 
  digitalWrite(Q3,LOW); 
  digitalWrite(Q4,HIGH); 
  } 

void left() { 
  Serial.println(""); 
  Serial.println("Left"); 
  digitalWrite(Q1,LOW); 
  digitalWrite(Q2,HIGH); 
  digitalWrite(Q3,HIGH); 
  digitalWrite(Q4,LOW); 
  } 

void right() { 
  Serial.println(""); 
  Serial.println("Right"); 
  digitalWrite(Q1,HIGH); 
  digitalWrite(Q2,LOW); 
  digitalWrite(Q3,LOW); 
  digitalWrite(Q4,HIGH); 
 }
