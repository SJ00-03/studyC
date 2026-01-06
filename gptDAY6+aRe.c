#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, N, warning = 0;
    
        
    printf("배터리 배열 크기(N)를 입력하세요: ");
    scanf("%d", &N);
    int battery[N];
    int repeat = sizeof(battery)/sizeof(battery[0]);

    printf("bat: ");
    for(i = 0; i < repeat; i++)
    {
        battery[i] = rand()%101;
        printf("%d ", battery[i]);
    }

    printf("\nwarning state: ");
    for(i = 0; i < repeat; i++)
    {
        if(battery[i] <= 30 && battery[i] > 0) warning = 1;
        else if(battery[i] >= 35 && battery[i] < 100) warning = 0;
        else if(battery[i] == 0) break;
        else if(battery[i] == 100) 
        {
            continue;
        }

        
        if(warning == 1) printf("ON");
        else if(warning == 0 && battery[i] > 30) printf("OFF");
        printf(" ");
    }
    printf("\n");

    return 0;    
}