#define speedR 5
#define speedL 10
#define O OUTPUT
#define DW(x,y) digitalWrite(x,y)
byte in[]={9,8,4,7};// input pins
byte moveing [5][4]={
{1,0,1,0},// forword
{0,1,0,1},//backword
{0,0,1,0},//left
{1,0,0,0},//right
{0,0,0,0}//stop
};

void setup()
{
  Serial.begin(9600);
  for(int i=0;i<4;i++)
  {pinMode(in[i],O);}
  pinMode(5,O);
  pinMode(10,O);
  analogWrite(5,150);
  analogWrite(10,150);
}

void loop()
{
  if(Serial.available())
  {switch(Serial.read()){
case 'F':for(int i=0;i<=3;i++)DW(in[i],moveing[0][i]);break;
case 'B':for(int i=0;i<=3;i++)DW(in[i],moveing[1][i]);break;
case 'L':for(int i=0;i<=3;i++)DW(in[i],moveing[2][i]);break;
case 'R':for(int i=0;i<=3;i++)DW(in[i],moveing[3][i]);break;
case 'S':for(int i=0;i<=3;i++)DW(in[i],moveing[4][i]);break; 
                             }}}