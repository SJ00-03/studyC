#include <stdio.h>

int main(void)
{
    int ary[5][6] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    
    int i, j;
    
    for(i = 0; i < 4; i++)
    {
        int sum = 0;
        for(j = 0; j < 5; j++)
        {
            sum += ary[i][j];
        }
        ary[i][j] = sum;
    }

    for(j = 0; j < 6; j++)
    {
        int sum = 0;
        for(i = 0; i < 4; i++)
        {
            sum += ary[i][j];
        }
        ary[i][j] = sum;
    }
 
    
    

    for(i = 0; i < 5; i++)
    {
        
        for(j = 0; j < 6 ; j++)
        {
            printf("%d ",ary[i][j]);
        }
        printf("\n");
    }
}