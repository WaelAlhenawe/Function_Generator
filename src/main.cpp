#include <meny.h>


#define BUFFERSIZE 10

void setup()
{
    Serial.begin(9600);
    while(!Serial.dtr())
    {
        delay(100);
    }
}
void loop()
{
    Serial.println("Enter desired waveform: ");
    Serial.println("1 - Sine wave: ");
    Serial.println("2 - Triangle wave ");
    Serial.println("3 - Set the frequency ");
    Serial.println("Enter command: ");
    char menu = readCommand();
    char buffer[BUFFER_SIZE] = {};
    uint8_t frequancy_got = 0;
    if (menu == '1')
    {
        //char buffer[BUFFERSIZE] = {};
		Serial.println("1 - Sine waveform chosen.");
        Serial.print("\n\n");
    }
    if (menu == '2')
    {
		Serial.println("2 - Triangle waveform chosen.");
        Serial.print("\n\n");
    }
    if (menu == '3')
    {
		Serial.println("3 - Set the frequency.");
        Serial.printf("Enter the frequancy (%d - %d Hz): ", MIN_FREQUENCY, MAX_FREQUENCY);
        frequancy_got = atoi(readFrequency(buffer));
        // Serial.printf("%d", frequancy_got);
        Serial.print("\n\n");
    }
}