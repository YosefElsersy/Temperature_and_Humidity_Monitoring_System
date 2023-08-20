#include <SoftwareSerial.h>
SoftwareSerial bt(8, 9); // RX, TX

#include <Wire.h> // I2C library
#include <LiquidCrystal_I2C.h> // I2C LCD library
#include "dht.h"

#define dataPin A2

LiquidCrystal_I2C lcd(0x27,16,2); // I2C address of LCD is 0x27, 16 characters x 2 lines
dht DHT;

int temp;
int hum;

void setup() {
 
 Serial.begin(9600); 
 bt.begin(9600); 
 Serial.println("Ready");
  
  lcd.init(); // initialize the LCD
  lcd.backlight(); // turn on backlight
  lcd.setCursor(0,0);
  lcd.print(" Fnatic Team ");
  lcd.setCursor(0,1);
  lcd.print("Welcome ^_^");
  delay(2000);
  lcd.clear(); 
}

void loop(){
  int readData = DHT.read11(dataPin);

  hum = DHT.humidity;
  temp = DHT.temperature;
  
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(hum);
  lcd.print("% ");

  lcd.setCursor(0,1); 
  lcd.print("Temp: "); 
  lcd.print(temp); 
  lcd.print((char)223); //degree symbol
  lcd.print("C ");

 bt.print(temp); //send distance to MIT App
 bt.print(";");
 bt.print(hum); //send distance to MIT App 
 bt.println(";");
  
  delay(1000);
}