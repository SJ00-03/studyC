#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i;
    int speed[10];
    int count = sizeof(speed)/sizeof(speed[0]);
    

    for(i=0; i < count; i++)
    {
        int s = rand()%15;
        speed[i] = s;
        
    }

    for(i=0; i < count; i++)
    {
        printf("%5d", speed[i]);
    }

    return 0;
}