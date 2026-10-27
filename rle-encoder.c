#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
//If there is 2 or more arguments (words)
//argc doesn't include ./ | argv does
    if (argc >= 2)
    {
//Compress
        if (strcmp(argv[1], "compress") == 0)
        {
            printf("String 1 = Compress");
        }
//Decompress
        else if (strcmp(argv[1], "decompress") == 0)
        {
            printf("String 1 = Decompress");
        }        
    
    }    
//When no arguments are added (just the file is ran ./)
        else
    {
        printf("Please use an argument of compress | decompress");
        return(1);
    }

}
