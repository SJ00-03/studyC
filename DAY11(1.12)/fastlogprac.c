#include <stdio.h>
#include <string.h>


int main(void)
{
   
    char count_ping[800];
    int cnt_ping = 0;
    
   
    FILE *fp;
    
    
    fp = fopen("fastlog.txt", "r");
     
    if(fp == NULL)
    {
        printf("파일 X \n");
    }

    while(fgets(count_ping, sizeof(count_ping), fp) != NULL)
    {
        cnt_ping += 1;
    }
    printf("핑 횟수: %d\n", cnt_ping);
    fclose(fp);

    return 0;




}