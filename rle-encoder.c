#include <stdio.h>
#include <string.h>


void compress(char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
        {
          printf("Error: Could not open file %s\n", filename);
            return;
        }

    int next_char = fgetc(file);
    int seen_char = next_char;
    int counter = 1;

    while ((next_char = fgetc(file)) != EOF)
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

    fclose(file);

}

void decompress(char *filename)
{
    int next_char = getchar();
    int seen_char = next_char;
    printf("Entering Decompress");
}


int main(int argc, char *argv[])
{
//If there is 1 or more arguments (words)
    if (argc == 3)
    {
        if (strcmp(argv[1], "compress") == 0)
        {
            compress(argv[2]);
        }

        else if (strcmp(argv[1], "decompress") == 0)
        {
            decompress(argv[2]);
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
