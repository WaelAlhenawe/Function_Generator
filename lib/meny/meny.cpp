#include <meny.h>



char readCommand()
{
    char command = '0';

    while ((command != '1') && (command != '2') && (command != '\n'))
    {
        if (Serial.available())
        {
            command = (Serial.read());
        }
    }

    Serial.printf("%c\n\n", command);
    
    return command;
}