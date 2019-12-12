#include <menu.h>
#include <Arduino.h>

uint8_t frequency = MIN_FREQUENCY;
char waveform = TRIANGLE_WAVEFORM;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.printf("%c) Select the waveform\n", WAVEFORM_OPTION);
    Serial.printf("%c) Set the frequency\n", FREQUENCY_OPTION);
    Serial.printf("%c) Information\n", INFORMATION_OPTION);
    Serial.print("Enter the command: ");
    char menu = readCommand();

    char buffer[BUFFER_SIZE] = {};
    if (menu == WAVEFORM_OPTION)
    {
        Serial.printf("Waveforms => %c) Sine, %c) Triangle: ", SINE_WAVEFORM, TRIANGLE_WAVEFORM);
        waveform = readWaveform();
        Serial.print("\n");
    }
    else if (menu == FREQUENCY_OPTION)
    {
        Serial.printf("Enter the frequency (%d - %d Hz): ", MIN_FREQUENCY, MAX_FREQUENCY);
        frequency = atoi(readFrequency(buffer));
        if (frequency < MIN_FREQUENCY)
        {
            frequency = MIN_FREQUENCY;
        }
        else if (frequency > MAX_FREQUENCY)
        {
            frequency = MAX_FREQUENCY;
        }
        Serial.print("\n\n");
    }
    else if (menu == INFORMATION_OPTION)
    {
        Serial.printf("Waveform: %s, Frequency: %d Hz\n\n", (waveform == SINE_WAVEFORM) ? "Sine" : "Triangle", frequency);
    }
}