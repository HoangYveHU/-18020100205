void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}//intializing I/O
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
   income=Serial.read();
    switch(income)
        {
          case 'f':
              forward();//forward
              break;
            case 'b':
              backward();//back
              break;
            case 'l':
              left();
              break;//left
            case 'r':
              right();
              break;//right
            case 's':
              stop();
              break;//stop
            default:
              break;
        }
 }
}
void forward()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);//drive motor
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  delay(3000);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);//forward indicator
}

void backward()
{
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);//drive motor
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  delay(3000);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);//back indicator
}

void left()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);//drive motor
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(3000);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);//LEFT indicator
}

void right()
{
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);//drive motor
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(3000);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);//RIGHT indicator
}

void stop()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);//stop motor
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(200);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(200);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(200);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);//stop shining
}
