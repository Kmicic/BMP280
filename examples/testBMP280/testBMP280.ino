/**************************************************************************
   Tests the getTemperature and getPressure functions
 **************************************************************************/
#include <BMP280.h>
BMP280 bmp280;

void setup()
{
  Serial.begin(115200);
  delay(10);
  Serial.println("BMP280 example");

  Wire.begin(); //Join I2C bus
  bmp280.begin();
}

void loop()
{
  //Get temperature and pressure value
  uint32_t pressure = bmp280.getPressure();
  float temperature = bmp280.getTemperature();

  //Print the results
  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.print("Pa \t");
  Serial.print("Temperature: ");
  Serial.print(temperature, 2);
  Serial.println(" C");

  delay(2000);
}
