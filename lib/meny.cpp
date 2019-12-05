#include <meny.h>



char readCommand()
{
    char command = 0;

    while ((command != 1) && (command != 2) && (command != '\n'))
    {
        if (Serial.available())
        {
            command = isdigit(Serial.read());
        }
    }

    Serial.printf("%d\n\n", command);
    
    return command;
}