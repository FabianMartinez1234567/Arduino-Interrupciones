bool estado=false;
bool estadoAnt=false;
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);    
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2,INPUT);
}
void loop()
{
    adelante();
    adelante();
    atras();
}

void adelante()
{
    for(int i=3;i<=6;i++)
    {
        estado=digitalRead(2);
        if(estado!=estadoAnt)
        {
            todos();
            estadoAnt = estado;
        }
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i,LOW);
    }
}


void atras()
{
    for(int i=6;i>=3;i--)
    {
        estado=digitalRead(2);
        if(estado!=estadoAnt)
        {
            todos();
            estadoAnt = estado;
        }
        digitalWrite(i, HIGH);
        delay(500);
        digitalWrite(i,LOW);
    }
  
}

void todos()
{
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);                              
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);                              
}
