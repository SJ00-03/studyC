#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int i;
    int speed[100];
    int count = sizeof(speed)/sizeof(speed[0]);
    

    for(i=0; i < count; i++)
    {
        int s = rand()%15;
        speed[i] = s;
        
    }

    for(i=0; i < count; i++)
    {
        printf("%3d", speed[i]);
        //if(???????) printf("\n");
        
    }
    printf("\n");

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