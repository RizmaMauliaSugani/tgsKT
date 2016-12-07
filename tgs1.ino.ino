int LDR =0;
int LDRValue=0;
int Light_sensitivity;
void setup()
{
Serial.begin(9600);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(9, OUTPUT);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() 
{
  LDRValue = analogRead(LDR);
Serial.println(LDRValue);
delay(50);
if (LDRValue < Light_sensitivity)
}

{
digitalWrite(10, HIGH);
delay(250);
digitalWrite(11, HIGH);
delay(250);
digitalWrite(9, HIGH);
delay(250);
digitalWrite(13, HIGH);
delay(250);
digitalWrite(12, HIGH);
delay(250);
}
else
{
digitalWrite(10,LOW);
digitalWrite(11, LOW);
digitalWrite(9, LOW);
digitalWrite(13, LOW);
digitalWrite(12, LOW);
}
}
