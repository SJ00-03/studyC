#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int battery[100];
    int i, N, s;
    int warning = 0;

    printf("데이터 개수를 입력하세요: ");
    scanf("%d", &N);

    for(i=0; i < N; i++)
    {
        s = rand()%100;
        battery[i] = s;
    }

    for(i=0; i < N; i++)
    {
        printf("%3d ", battery[i]);
    }
    printf("\n");

    for(i=0; i < N; i++)
    {
        if(warning == 0 && battery[i] <= 30)
        {
            printf("ON ");
        }

        else if (warning == 0 && battery[i] >= 35)
        {
        printf("OFF ");
        }
        
        
    }
    printf("\n");

    return 0;
}