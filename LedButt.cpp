int led=2;
int pb=25;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(pb, INPUT);
  pinMode(pb, INPUT_PULLUP); 
}

void loop() {
  
  if(digitalRead(pb) == LOW){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  
}
