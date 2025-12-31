#include <stdio.h>

int main()
{
    int i;
    int speed[10] = {23, 33, 52, 32, 51, 64, 43, 33, 32, 23};
    int count = sizeof(speed)/sizeof(speed[0]);

    for(i = 0; i < count; i++)
    {
        if(speed[i+1] - speed[i] >= 10)
        {
            printf("급가속\n");
        }
        else if(speed[i+1] - speed[i] <= -10)
        {
            printf("급제동\n");            
        }
        else
        printf("Good\n");
    }



}