#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[5];
    int size = sizeof(a)/sizeof(a[0]);
    int i;
    
    for(i = 0; i < size; i++)
    {
        a[i] = rand()%10;
    }
    
    int min = a[0];

    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i = 1; i < size; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }        
    }
    printf("%d\n", min);


   
    return 0;
}