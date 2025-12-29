#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    if (a < 0)
    {
        if(b > 0)
        {
            b = 1;
        }
        else
        {
            b = -1;
        }
    }
    
    printf("a : %d, b : %d\n", a, b);

    return 0;
}
