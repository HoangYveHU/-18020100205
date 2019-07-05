#include <Morse.h>
Morse morse(13); 
char CODE[][4]=
{
  {'.','-','*','*'},
  {'-','.','.','.'},
  {'-','.','-','.'},
  {'-','.','.','*'},
  {'.','*','*','*'},
  {'.','.','-','.'},
  {'-','-','.','*'},
  {'.','.','.','.'},
  {'.','.','*','*'},
  {'.','-','-','-'},
  {'-','.','-','*'},
  {'.','-','.','.'},
  {'-','-','*','*'},
  {'-','.','*','*'},
  {'-','-','-','*'},
  {'.','-','-','.'},
  {'-','-','.','-'},
  {'.','-','.','*'},
  {'.','.','.','*'},
  {'-','*','*','*'},
  {'.','.','-','*'},
  {'.','.','.','-'},
  {'.','-','-','*'},
  {'-','.','.','-'},
  {'-','.','-','-'},
  {'-','-','.','.'},
}
void setup(){
  Serial.begin(9600);
}
void loop(){
  String letter=""；
  String morse="";
  int i,j,t=0;
  int count=0;
  while(Serial.available()>0){
    t=1;
    letter+=char(Serial.read());
    delay(2);
    count++;
  }
  //或许用letter.length()计数??
  if(t）{
    for(i=0;i<count;i++)
    {
      for(j=0;j<4;j++){
        if(letter[i]<="z"&&letter[i]>="a"){
          morse+=char(CODE[int(letter[i]-97)][j]);
        }
      }
    }morse+=" ";
  }
  Serial.println(morse);
  for (i = 0; morse_s[i]!='\0' ; i++){
    if (morse[i] == '.')morse.dot();
        else if (morse[i] == '-'）
           morse.dash();
        else if (morse[i] == ' ')
           morse.w_space();
        if (morse[i] != ' ' && letter[i] != '*')
           morse.c_space();
  }delay(2)；
}
