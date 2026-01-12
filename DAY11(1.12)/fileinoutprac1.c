#include <stdio.h>
#include <string.h>


int main(void)
{
    int Ecnt = 0, sensor = 0, motor = 0;
    int ch;
    char str[800];
    int len = 0;

   
    FILE *fp;
    
    
    fp = fopen("log.txt", "r");
     
    if(fp == NULL)
    {
        printf("파일 X \n");
    }


                       
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        puts(str);
        // [ERROR] 라인만 카운트
        if (strstr(str, "[ERROR]") != NULL)
         {
            Ecnt += 1;

            if (strstr(str, "Sensor") != NULL) sensor += 1;
            if (strstr(str, "Motor")  != NULL) motor += 1;
        }
    }
    
    

    printf("에러 횟수: %d\n", Ecnt);
    printf("센서 에러 횟수: %d\n", sensor);
    printf("모터 에러 횟수: %d\n", motor);
    fclose(fp);
    return 0;

}