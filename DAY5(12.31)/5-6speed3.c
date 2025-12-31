#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int i, j;
    int speed[30];
    int count = sizeof(speed)/sizeof(speed[0]); //count=30
    speed[0] = rand()%21 + 20;
    printf("%d ", speed[0]);
      
    for(i=0; i < count-1; i++)
    {
        int s = rand()%41-20;
        
        speed[i+1] = speed[i] + s;

        if(speed[i+1]>speed[i])
        {
            for(j = i; j < i+10 && j < 29; j++)
            {
                int ss = rand()%21;
                speed[j+1] = speed[j] + ss;
                printf("%3d ", speed[j]);                
            }
            i += 9;
            
        
        }
        else if(speed[i+1]<speed[i])
        {
            for(j = i; j < i+10 && j < 29; j++)
            {
                int ss = rand()%21;
                speed[j+1] = speed[j] - ss;

                if(speed[j+1]<= 0)
                {
                    printf("차 멈춤 ");
                    
                }
                
                else if(speed[j+1] > 0)
                {
                    printf("%3d ", speed[j+1]);
                }         
              
                
            }
            i += 9;
        
        }
         
    }
    printf("\n");
    return 0;
        
}
    


