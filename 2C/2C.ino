int B=0;
void setup()
{
    pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(2,INPUT);
    attachInterrupt(digitalPinToInterrupt(2),PAP,CHANGE);
}

void loop() 
{
  PAP();
}

void PAP()
{
    ++B;
    switch(B)
    {
        case 1:
            digitalWrite(6,LOW);
            digitalWrite(3,HIGH);
            break;
        case 2:
            digitalWrite(3,LOW);
            digitalWrite(4,HIGH);
            break;
        case 3:
            digitalWrite(4,LOW);
            digitalWrite(5,HIGH);
            break;
        case 4:
            digitalWrite(5,LOW);
            digitalWrite(6,HIGH);
        case 5:
            B=0;
            break;
    }
}
