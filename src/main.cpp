#include <datetime.h>
#include <Arduino.h>
#include <TimeLib.h>

#define BUFFERSIZE 10

void setup()
{
    Serial.begin(9600);
    while (!Serial.dtr())
    {
        delay(100);
    }
}
void loop()
{
    Serial.println("Enter desired waveform: 1 - Sine wave  or  2 - Triangle wave ");
    char menu = readCommand();
    if (menu == '1')
    {
        char buffer[BUFFERSIZE] = {};
		Serial.println("1 - Sine waveform chosen.");
        void waveCh0_select();
        Serial.print("\n\n");
    }
    else if (menu == '2')
    {
		Serial.println("2 - Triangle waveform chosen.");
        void waveCh0_select();
        Serial.print("\n\n");
    }
}