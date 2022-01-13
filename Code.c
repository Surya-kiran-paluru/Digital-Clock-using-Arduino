#include <LiquidCrystal.h>

const int rs = 2;
const int en = 3;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int h = 12;
int m = 0;
int s = 0;
int flag = 0;
int TIME = 0;
const int hs = 0;
const int ms = 1;
int state1 = 0;
int state2 = 0;

int sensorvalue;
double temp;

void setup()
{
lcd.begin(16, 2);
pinMode(hs, INPUT_PULLUP);
pinMode(ms, INPUT_PULLUP);
pinMode(A0,INPUT);
}

void loop()
{
lcd.setCursor(0, 0);
s = s + 1;

sensorvalue = analogRead(A0);
temp = (double)sensorvalue / 1024;
temp = temp * 5;
temp = temp - 0.5;
temp = temp * 100;

lcd.print("TIME:" );

if(h<10) lcd.print("0");
lcd.print(h);
lcd.print(":");
if(m<10) lcd.print("0");
lcd.print(m);
lcd.print(":");
if(s<10) lcd.print("0");
lcd.print(s);

if (flag < 12) lcd.print(" AM");
if (flag == 12) lcd.print(" PM");
if (flag > 12) lcd.print(" PM");
if (flag == 24) flag = 0;

lcd.setCursor(0, 1);
lcd.print("TEMP: ");
lcd.print(temp);
lcd.print(" C");
delay(1000);
lcd.clear();

if (s == 60)
{
s = 0;
m = m + 1;
}

if (m == 60)
{
m = 0;
h = h + 1;
flag = flag + 1;
}

if (h == 13)
{
h = 1;
}

state1 = digitalRead(hs);
if (state1 == 0)
{
h = h + 1;
flag = flag + 1;
if (flag < 12) lcd.print(" AM");
if (flag == 12) lcd.print(" PM");
if (flag > 12) lcd.print(" PM");
if (flag == 24) flag = 0;
if (h == 13) h = 1;
}

state2 = digitalRead(ms);
if (state2 == 0)
{
s = 0;
m = m + 1;
}
}
