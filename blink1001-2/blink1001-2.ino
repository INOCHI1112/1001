const int button = 2;
const int R = 3;
const int B = 4;
const int G = 5;

int buttonstate = 0 ;
int color = 0 ;
bool buttonpress = false;

void setup () {
// put your setup code here, to run once: pinMode (button, INPUT) ; pinMode(R, OUTPUT) ;
pinMode(button, INPUT) ;
pinMode(R,OUTPUT) ;
pinMode(B,OUTPUT) ;
pinMode(G, OUTPUT) ;
}
void loop() {
// put your main code here, to run repeatedly:
buttonstate = digitalRead(button);

if (buttonstate == HIGH && !button) {
 color=color+1;
 delay (100) ;
}
if(color == 0){
//white
digitalWrite(R, LOW);
digitalWrite(B, LOW);
digitalWrite(G, LOW);
}
else if(color == 1){
  digitalWrite(R,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
}
else if(color == 2){
  digitalWrite(R,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(G,HIGH);
}
else if(color == 3){
  digitalWrite(R,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,HIGH);
}
else if(color == 4){
  digitalWrite(R,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
}
else if(color == 2){
  digitalWrite(R,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,LOW);
}
else if(color == 5){
  color = 0;
}
}