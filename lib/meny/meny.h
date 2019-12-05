#ifndef MENY_H
#define MENY_H

#include <ctype.h>
#include <Arduino.h>

#define BUFFER_SIZE 3
#define MIN_FREQUENCY 1
#define MAX_FREQUENCY 10
char readCommand();
char * readFrequency(char * buffer);


#endif