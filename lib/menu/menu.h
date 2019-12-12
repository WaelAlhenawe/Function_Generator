#ifndef MENU_H
#define MENU_H

#include <stdint.h>
#include <Arduino.h>

#define BUFFER_SIZE 3
#define WAVEFORM_OPTION 'W'
#define FREQUENCY_OPTION 'F'
#define INFORMATION_OPTION 'I'
#define SINE_WAVEFORM 'S'
#define TRIANGLE_WAVEFORM 'T'
#define MIN_FREQUENCY 1
#define MAX_FREQUENCY 10

#define DAC_RESOLUTION 10
#define SUPPLIED_VOLTAGE 3.3f
#define VOLTAGE_RESOLUTION (SUPPLIED_VOLTAGE / (1 << DAC_RESOLUTION))

char readCommand();
char readWaveform();
char * readFrequency(char * buffer);


#endif