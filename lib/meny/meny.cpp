#include <meny.h>



char readCommand()
{
    int command = '0';

    while ((command != '1') && (command != '2') && (command != '3')&& (command != '\n'))
    {
        if (Serial.available())
        {
            command = (Serial.read());
        }
    }

    Serial.printf("%c\n\n", command);
    
    return command;
}

// char readWaveCommand()
// {
//     int command = '0';

//     while ((command != '1') && (command != '2') && (command != '\n'))
//     {
//         if (Serial.available())
//         {
//             command = (Serial.read());
//         }
//     }

//     Serial.printf("%c\n\n", command);
    
//     return command;
// }
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

    buffer[BUFFER_SIZE -1 ]= 0;
    Serial.clear();

    return buffer;

}


}