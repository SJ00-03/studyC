#include <stdio.h>

int main (void)
{
    int ch;
    FILE *fp;

    fp = fopen("fastlog.txt", "r");

    while(1)
    {
        ch = fgetc(fp);

        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }


    fclose(fp);

    return 0;
}

