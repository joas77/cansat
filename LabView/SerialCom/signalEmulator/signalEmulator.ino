/*
*  programa para pruebas emulando una 
*  señal diente de sierra a través del
*  puerto serie
*/

void setup()
{
  Serial.begin(9600);
}

int  Ts=100;   // tiempo entre muestras en milisegundos
byte Amp=100; // amplitud de la señal

void loop()
{
  for(byte i=0; i<=Amp; i++)
  {
    Serial.println(i);
    delay(Ts);
  }
}
