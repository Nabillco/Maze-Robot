#define ena1 2///////////
//top right Motor
#define ena2 3///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*
//buttom right motor  
#define ena3 4///////////////
//top left Motor
#define ena4 5///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*
//buttom left motor  






/////////////////////////////////////////////////////////////
#define int1 14
//for ena1
#define int2 15
//for ena1
#define int3 16
//for ena2
#define int4 17
//for ena2
#define int5 18
//for ena3
#define int6 19
//for ena3
#define int7 20
//for ena4
#define int8 21
//for ena4



#define ulmt 6
#define ulme 7
#define ulrt 8
#define ulre 9
#define ullt 10
#define ulle 11
#define ir 30
#define ir2 31
//irsensor
int i=180;
int k=0;
long durationm;
long durationr;
long durationl;
long distancem;
long distancer;
long distancel;
void setup() 
{
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);
pinMode(ena3,OUTPUT);
pinMode(ena4,OUTPUT);









pinMode(int1,OUTPUT);
pinMode(int2,OUTPUT);
pinMode(int3,OUTPUT);
pinMode(int4,OUTPUT);
pinMode(int5,OUTPUT);
pinMode(int6,OUTPUT);
pinMode(int7,OUTPUT);
pinMode(int8,OUTPUT);




pinMode(ulmt,OUTPUT);
pinMode(ulme,INPUT);
pinMode(ulrt,OUTPUT);
pinMode(ulre,INPUT);
pinMode(ullt,OUTPUT);
pinMode(ulle,INPUT);
pinMode(ir,OUTPUT);
pinMode(ir2,OUTPUT);
//(ena=Motor),(ir= infraredsensor),(um=ultrasonic)

Serial.begin(9600);//enable Serial monitor
}
void loop()
{

 ulm();
 ulr();
 ull();
if((distancem>10)&&(distancer<10)&&(distancel<10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{ 
forword(); 
}
if((distancem>10)&&(distancer>10)&&(distancel>10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{
forword();  
}
if((distancem>10)&&(distancer>10)&&(distancel<10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{ 
forword();  
}
if((distancem>10)&&(distancer<10)&&(distancel>10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{
forword();  
}



if((distancem<10)&&(distancer>10)&&(distancel<10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{
stop1();
delay(500);
Right();  
}
if((distancem<10)&&(distancer>10)&&(distancel>10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{
stop1();
delay(500);
Right();  
}






if((distancem<10)&&(distancer<10)&&(distancel>10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{
stop1();
delay(500);
left();  
}
if((distancem<10)&&(distancer<10)&&(distancel<10)&&(ir==0)&&(ir2==0))//ir==0 mean that there is nothing ir2==0 mean that there is nothings
{
stop1();
delay(500);
reverse();
}





















if((distancem>10)&&(distancer<10)&&(distancel<10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{                                                                                                                                 
stop1();
delay(500);                                                                                                                     
reverse();                                                                                                                       
}                                                                                                                                
if((distancem>10)&&(distancer>10)&&(distancel>10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{                                                                                                                                
stop1();                                                                                                                         
delay(500);
reverse();                                                                                                                   
}
if((distancem>10)&&(distancer>10)&&(distancel<10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{ 
stop1();
delay(500);
reverse();  
}
if((distancem>10)&&(distancer<10)&&(distancel>10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{
stop1();
delay(500);
reverse();  
}
if((distancem<10)&&(distancer>10)&&(distancel<10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{
stop1();
delay(500);
reverse(); 
}
if((distancem<10)&&(distancer>10)&&(distancel>10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{
stop1();
delay(500);
reverse();  
}
if((distancem<10)&&(distancer<10)&&(distancel>10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{
stop1();
delay(500);
reverse();  
}
if((distancem<10)&&(distancer<10)&&(distancel<10)&&(ir==1)&&(ir2==1))//ir==1 mean that there is black ir2==1 mean that there is black
{
stop1();
delay(500);
reverse();
}
}
