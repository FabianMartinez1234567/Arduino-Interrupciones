bool estado = false;
void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), ALTO, CHANGE);
}
void loop() {
if(estado==true){
adelante();
}else{
atras();}
}
void adelante() {
  for (int i = 3; i <= 6; i++) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}
void atras() {
  for (int i = 6; i >= 3; i--) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}
void ALTO() {
estado=!estado;
}
