int porta_rele2 = 7;
int state = 0;

void setup() {
  pinMode(porta_rele2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    state = Serial.read();
 }
 if (state == '0') {
  digitalWrite(porta_rele2, HIGH); 
  state = 0;
 }
 else if (state == '1') {
  digitalWrgitite(porta_rele2, LOW);
  state = 0;
 } 
}
