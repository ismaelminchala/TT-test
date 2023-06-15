int sensorPin = A4;    // select the input pin for the magnetorestrictive sensor
int sensorValue = 0;   // value of the sensor
int offset=0;
int last=0;
int salida=0;
int diff=0;
int ec = 2;
int motorPin = 3;
int dirPin = 12;
float control_effort = 0.f;
float serial_input = 0;

void setup()
{
  Serial.begin(57600);
  Serial.flush();
  pinMode(motorPin, OUTPUT);
  pinMode(dirPin,OUTPUT); 
}

void loop()
{
  last=sensorValue;
  sensorValue = analogRead(sensorPin);  
  Serial.println(sensorValue);
  delay(100);
}
