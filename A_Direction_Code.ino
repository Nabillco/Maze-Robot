void forword()
{
digitalWrite(ena1,i);
digitalWrite(ena2,i);
digitalWrite(ena3,i);
digitalWrite(ena4,i);
digitalWrite(int1,LOW);
digitalWrite(int2,HIGH);
digitalWrite(int3,HIGH);
digitalWrite(int4,LOW);
digitalWrite(int5,LOW);
digitalWrite(int6,HIGH);
digitalWrite(int7,LOW);
digitalWrite(int8,HIGH);
//(int1,int2 for ena1),(int3,int4 for ena2)and soo on .....
//(HIGH,LOW)move forword (LOW,HIGH)MOVE Backword
// the speed i =180 and speed k =0
}








void Right()
{
digitalWrite(ena1,k);
digitalWrite(ena2,k);
digitalWrite(ena3,i);
digitalWrite(ena4,i);
digitalWrite(int1,HIGH);
digitalWrite(int2,HIGH);
digitalWrite(int3,HIGH);
digitalWrite(int4,HIGH);
digitalWrite(int5,LOW);
digitalWrite(int6,HIGH);
digitalWrite(int7,LOW);
digitalWrite(int8,HIGH);
//(int1,int2 for ena1),(int3,int4 for ena2)and soo on .....
//(HIGH,LOW)move forword (LOW,HIGH)MOVE Backword
// the speed i =180 and speed k =0
}













void left()
{
digitalWrite(ena1,i);
digitalWrite(ena2,i);
digitalWrite(ena3,k);
digitalWrite(ena4,k);
digitalWrite(int1,LOW);
digitalWrite(int2,HIGH);
digitalWrite(int3,HIGH);
digitalWrite(int4,LOW);
digitalWrite(int5,HIGH);
digitalWrite(int6,HIGH);
digitalWrite(int7,HIGH);
digitalWrite(int8,HIGH);
//(int1,int2 for ena1),(int3,int4 for ena2)and soo on .....
//(HIGH,LOW)move forword (LOW,HIGH)MOVE Backword
// the speed i =180 and speed k =0
}





void stop1()
{
digitalWrite(ena1,k);
digitalWrite(ena2,k);
digitalWrite(ena3,k);
digitalWrite(ena4,k);
digitalWrite(int1,HIGH);
digitalWrite(int2,HIGH);
digitalWrite(int3,HIGH);
digitalWrite(int4,HIGH);
digitalWrite(int5,HIGH);
digitalWrite(int6,HIGH);
digitalWrite(int7,HIGH);
digitalWrite(int8,HIGH);
//(int1,int2 for ena1),(int3,int4 for ena2)and soo on .....
//(HIGH,LOW)move forword (LOW,HIGH)MOVE Backword
// the speed i =180 and speed k =0
}









void reverse()
{
digitalWrite(ena1,i);
digitalWrite(ena2,i);
digitalWrite(ena3,i);
digitalWrite(ena4,i);
digitalWrite(int1,HIGH);
digitalWrite(int2,LOW);
digitalWrite(int3,LOW);
digitalWrite(int4,HIGH);
digitalWrite(int5,HIGH);
digitalWrite(int6,LOW);
digitalWrite(int7,HIGH);
digitalWrite(int8,LOW);
delay(1000);

digitalWrite(ena1,k);
digitalWrite(ena2,k);
digitalWrite(ena3,i);
digitalWrite(ena4,i);
digitalWrite(int1,HIGH);
digitalWrite(int2,HIGH);
digitalWrite(int3,HIGH);
digitalWrite(int4,HIGH);
digitalWrite(int5,LOW);
digitalWrite(int6,HIGH);
digitalWrite(int7,LOW);
digitalWrite(int8,HIGH);
delay(5000);
//(int1,int2 for ena1),(int3,int4 for ena2)and soo on .....
//(HIGH,LOW)move forword (LOW,HIGH)MOVE Backword
// the speed i =180 and speed k =0
}
