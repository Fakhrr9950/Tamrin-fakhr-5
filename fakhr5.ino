
int ledpin=3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
float voltage=analogRead(A0);
float voltage1=voltage/1023*5;
Serial.print("Voltage=");
Serial.println(voltage1);
//delay(1000);
float voltage2=map(voltage,0,1023,0,255);
analogWrite(3,voltage2);




}
