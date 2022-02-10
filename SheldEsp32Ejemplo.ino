#include <Arduino.h>
#include <Adafruit_MCP23X17.h>
///////////////////////////ENTRADAS/////////////////////////////
#define IN_1 0
#define IN_2 1
#define IN_3 2
#define IN_4 3
#define IN_5 4
#define IN_6 5
#define IN_7 6
#define IN_8 7
#define AN1 39
#define AN2 35
#define AN3 36
#define AN4 34
/////////////////////////////SALIDAS/////////////////////////////
#define COM_8 8
#define COM_7 9
#define COM_6 10
#define COM_5 11
#define COM_4 12
#define COM_3 13
#define COM_2 14
#define COM_1 15
//////////////////////////PINES_ESPECIALES///////////////////////
#define CS_PIN_MCP 5
#define CS_PIN_ETHERNET 2
#define CS_PINERA 27
#define CS_TERMINAL 25
Adafruit_MCP23X17 mcp;
unsigned long an1_av = 0, an2_av = 0, an3_av = 0, an4_av = 0;
void setup()
{
  Serial.begin(115200);
  if (!mcp.begin_SPI(CS_PIN_MCP))
  {
    Serial.println("Error.");
    while (1)
      ;
  }
  {
    Serial.println("Iniciado");
    }
mcp.pinMode(IN_1, INPUT);
  mcp.pinMode(IN_2, INPUT);
  mcp.pinMode(IN_3, INPUT);
  mcp.pinMode(IN_4, INPUT);
  mcp.pinMode(IN_5, INPUT);
  mcp.pinMode(IN_6, INPUT);
  mcp.pinMode(IN_7, INPUT);
  mcp.pinMode(IN_8, INPUT);
  mcp.pinMode(COM_1, OUTPUT);
  mcp.pinMode(COM_2, OUTPUT);
  mcp.pinMode(COM_3, OUTPUT);
  mcp.pinMode(COM_4, OUTPUT);
  mcp.pinMode(COM_5, OUTPUT);
  mcp.pinMode(COM_6, OUTPUT);
  mcp.pinMode(COM_7, OUTPUT);
  mcp.pinMode(COM_8, OUTPUT);
}
void loop()
{
  if (mcp.digitalRead(IN_1) == HIGH)
  {
    mcp.digitalWrite(COM_1, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_1, LOW);
  }
if (mcp.digitalRead(IN_2) == HIGH)
  {
    mcp.digitalWrite(COM_2, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_2, LOW);
  }
if (mcp.digitalRead(IN_3) == HIGH)
  {
    mcp.digitalWrite(COM_3, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_3, LOW);
  }
if (mcp.digitalRead(IN_4) == HIGH)
  {
    mcp.digitalWrite(COM_4, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_4, LOW);
  }
if (mcp.digitalRead(IN_5) == HIGH)
  {
    mcp.digitalWrite(COM_5, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_5, LOW);
  }
if (mcp.digitalRead(IN_6) == HIGH)
  {
    mcp.digitalWrite(COM_6, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_6, LOW);
  }
if (mcp.digitalRead(IN_7) == HIGH)
  {
    mcp.digitalWrite(COM_7, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_7, LOW);
  }
if (mcp.digitalRead(IN_8) == HIGH)
  {
    mcp.digitalWrite(COM_8, HIGH);
  }
  else
  {
    mcp.digitalWrite(COM_8, LOW);
  }
for (int i = 0; i <= 999; i++)
  {
    an1_av += analogRead(AN1);
    an2_av += analogRead(AN2);
    an3_av += analogRead(AN3);
    an4_av += analogRead(AN4);
  }
  an1_av /= 1000;
  an2_av /= 1000;
  an3_av /= 1000;
  an4_av /= 1000;
  Serial.print("In A1: ");
  Serial.println(an1_av);
  Serial.print("In A2: ");
  Serial.println(an2_av);
  Serial.print("In A3: ");
  Serial.println(an3_av);
  Serial.print("In A4: ");
  Serial.println(an4_av);
}
