#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, j, s;
    int speed[30];
    int count = sizeof(speed)/sizeof(speed[0]); //count=30
    

    //10회를 채우면 한번 바뀔때마다 !!!!비교하고 방향성이 바뀔때만 10회 반복!!!!
    for(i=0; i < 2; i++)
    {
        speed[i] = rand()%21;
    
    }


    if(speed[1] - speed[0] >= 0)
    {
        for(j=2; j<12; j++)
        {
            speed[j] = speed[j-1] + rand()%21;
        }

    }
    else if(speed[1] - speed[0] < 0)
        {
            speed[j] = speed[j-1] - rand()%21;
        }
    


}