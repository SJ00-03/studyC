#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    for(i=0; i <= 100; i++)
    {
        if(i%3 == 0)
        {
            continue;//다음 블록으로 빠져나가라
        }
        
        sum += i;
        printf("%d ", sum);

    }

}