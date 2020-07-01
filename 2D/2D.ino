bool estado = false;

void setup()
{
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(2, INPUT);
    attachInterrupt(digitalPinToInterrupt(2), ALTO, CHANGE);
}

void loop()
{
    if(estado==true)
    {
        adelante();
    }
    else
    {
        atras();
    }
}
//__________________________________________________________________________________________________________________________________________________________________________________________
void adelante()
{
    for (int i = 3; i <= 6; i++) 
    {
        digitalWrite(i, HIGH);
        delay(100);
        digitalWrite(i, LOW);
  }
}
//__________________________________________________________________________________________________________________________________________________________________________________________
void atras() 
{
    for (int i = 6; i >= 3; i--) 
    {
        digitalWrite(i, HIGH);
        delay(100);
        digitalWrite(i, LOW);
    }
}
//__________________________________________________________________________________________________________________________________________________________________________________________
void ALTO() 
{
    estado=!estado;
}
