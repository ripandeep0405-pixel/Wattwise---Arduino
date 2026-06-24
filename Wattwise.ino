#include <Wire.h>
#include <RTClib.h>
#include <LiquidCrystal.h>

RTC_DS1307 rtc;

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int ledPin = 7;
int fanPin = 8;

float watts = 50.0;

// Demo ON time
int onHour = 14;
int onMinute = 41;

int offHour = 14;
int offMinute = 42;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  
    lcd.begin(16, 2);
    rtc.begin();
  
  // Use once to set RTC time, then comment it again
  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

  lcd.setCursor(0, 0);
  lcd.print("WattWise      ");
  lcd.setCursor(0, 1);
  lcd.print("Ready       ");
  delay(1000);
  
}

void loop() {
  DateTime now = rtc.now();

  int hour = now.hour();
  int minute = now.minute();

  int currentTime = hour * 60 + minute;
  int onTime = onHour * 60 + onMinute;
  int offTime = offHour * 60 + offMinute;

  bool systemOn = currentTime >= onTime && currentTime < offTime;

  if (systemOn) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(fanPin, HIGH);

    lcd.setCursor(0, 0);
    lcd.print("LED Fan ON      ");
    lcd.setCursor(0, 1);
    lcd.print("Save Energy :)   ");
  }
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(fanPin, LOW);

    int offMinutes = currentTime - offTime;

    if (offMinutes < 0) {
      offMinutes = 0;
    }

    float savedWh = watts * offMinutes / 60.0;

    lcd.setCursor(0, 0);
    lcd.print("LED Fan OFF     ");
    lcd.setCursor(0, 1);
    lcd.print("Saved:");
    lcd.print(savedWh, 0);
    lcd.print("Wh        ");
  }

  delay(1000);
}