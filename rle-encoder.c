#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
//If there is 1 or more arguments (words)
    if (argc >= 2)
    {
        if (strcmp(argv[1], "compress") == 0)
        {
            printf("String 1 = Compress");
        }

        else if (strcmp(argv[1], "decompress") == 0)
        {
            printf("String 1 = Decompress");
        }
        else
        {
            printf("Use Valid Arguments compress | decompress");
        }      
    
    }    
    else
    {
        printf("Please use an argument of compress | decompress");
        return(1);
    }

}
