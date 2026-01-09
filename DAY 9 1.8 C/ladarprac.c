#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int distance;
    int i;
    int degree[360];
    int size = sizeof(degree) / sizeof(degree[0]);
    

    degree[0] = rand()%50 + 50;
    
    for(i = 1; i < size; i++)
    {
        int distance_range = rand()%21 - 10; // -10 ~ 10
        degree[i] = degree[i-1] + distance_range;
        while(degree[i] < 1)
        {
            int positive = rand()%11;
            degree[i] = degree[i-1] + positive;
            
        }
    }

    for(i = 0; i < size; i++)
    {
        printf("%5d", degree[i]);
        if(i%10 == 9) printf("\n");

    }

    int min = degree[0];
    int location;

    for(i = 1; i < size; i++)
    {
        if(min > degree[i])
        {
            min = degree[i];
            location = i+1;
        }               
    }
    printf("최솟값: %d 각도: %d°\n", min, location);

}

