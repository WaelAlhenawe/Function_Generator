#include <meny.h>
#include <Arduino.h>

#define BUFFERSIZE 10

void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Enter desired waveform: ");
    Serial.println("1 - Sine wave: ");
    Serial.println("2 - Triangle wave ");
    Serial.println("Enter command: ");
    char menu = readCommand();
    if (menu == '1')
    {
        char buffer[BUFFERSIZE] = {};
		Serial.println("1 - Sine waveform chosen.");
        Serial.print("\n\n");
    }
    else if (menu == '2')
    {
		Serial.println("2 - Triangle waveform chosen.");
        Serial.print("\n\n");
    }
}