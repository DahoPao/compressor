#include <stdio.h>
#include <string.h>


void compress()
{
    int next_char = getchar();
    int seen_char = next_char;
    int counter = 1;

    while ((next_char = getchar()) != EOF)
    {   
        if (seen_char == next_char)
        {
        counter++;        
        }
        else
        {
            printf("\n%c%d", seen_char, counter);
            counter = 1;
            seen_char = next_char;
        }
    }

    printf("\n%c%d", seen_char, counter);


}

void decompress()
{
    int next_char = getchar();
    int seen_char = next_char;
    printf("Entering Decompress");
}


int main(int argc, char *argv[])
{
//If there is 1 or more arguments (words)
    if (argc >= 2)
    {
        if (strcmp(argv[1], "compress") == 0)
        {
            compress();
        }

        else if (strcmp(argv[1], "decompress") == 0)
        {
            decompress();
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
