void ulm()
{
digitalWrite(ulmt,LOW);
delayMicroseconds(2);
digitalWrite(ulmt,HIGH);
delayMicroseconds(10);
digitalWrite(ulmt,LOW);
durationm=pulseIn(ulme,HIGH);
distancem= durationm*0.034/2;//or 29.1
//(ulmr=trigpin)(ulml=echpin) 
Serial.print("distance middle = ");
Serial.println(distancem);
}






void ulr()
{
digitalWrite(ulrt,LOW);
delayMicroseconds(2);
digitalWrite(ulrt,HIGH);
delayMicroseconds(10);
digitalWrite(ulrt,LOW);
durationr=pulseIn(ulre,HIGH);
distancer= durationr*0.034/2;//or 29.1
//(ulmr=trigpin)(ulml=echpin) 
Serial.print("distance Right = ");
Serial.println(distancer);
 
}







void ull()
{
digitalWrite(ullt,LOW);
delayMicroseconds(2);
digitalWrite(ullt,HIGH);
delayMicroseconds(10);
digitalWrite(ullt,LOW);
durationl=pulseIn(ulle,HIGH);
distancel= durationl*0.034/2;//or 29.1
//(ulmr=trigpin)(ulml=echpin) 
Serial.print("distance left = ");
Serial.println(distancel);
}
