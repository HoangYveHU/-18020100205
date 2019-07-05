void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}


void dot()
{
  digitalWrite(2,HIGH);
  delay(250);
  digitalWrite(2,LOW);
  delay(250);
}//define dot signal

void line()
{
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
}//define line signal

void c_space()
{
  digitalWrite(2,LOW);
  delay(750);
}

void w_space()
{
  digitalWrite(2,LOW);
  delay(1750);
}


void loop() 
{
  String str = "";
  String morse = "";
  int n = 0;  
  while (Serial.available() > 0)
  {
    temp = 1;  
    str += char(Serial.read());
    n++;
    delay(2);  
   }

if (temp)
{
  for (int i = 0; i < n; i++)
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      morse+=
    }
    if (int(str[i])!=32)
       {morse += '/';}
    else
       { morse += ' ';}
    }
}

}
