#include <menu.h>



char readCommand()
{
    int command = '0';

    while ((command != WAVEFORM_OPTION) && (command != FREQUENCY_OPTION) && (command != INFORMATION_OPTION)&& (command != '\n'))
    {
        if (Serial.available())
        {
            command = toupper(Serial.read());
        }
    }

    Serial.printf("%c\n\n", command);
    
    return command;
}

char readWaveform()
{
    int command = '0';

    while ((command != SINE_WAVEFORM) && (command != TRIANGLE_WAVEFORM) && (command != '\n'))
    {
        if (Serial.available())
        {
            command = toupper(Serial.read());
        }
    }

    Serial.printf("%c\n\n", command);
    
    return command;
}

char * readFrequency(char * buffer){

uint8_t i = 0 ;

while (i < BUFFER_SIZE)
{
    if (Serial.available()){
        char temp = Serial.read();
        if(temp == '\n'){
            break;
        }
        else if (isdigit(temp))
        {
            Serial.print(temp);
            buffer[i]= temp;
            i++;
        }
        
    }


}
    buffer[BUFFER_SIZE -1 ]= 0;
    Serial.clear();

    return buffer;

}