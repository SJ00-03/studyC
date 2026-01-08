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
    

    degree[0] = rand()%21;
    
    for(i = 1; i < size; i++)
    {
        int distance_range = rand()%21 - 10; // -10 ~ 10
        degree[i] = degree[i-1] + distance_range;
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
    printf("%d %d\n", min, location);

}

