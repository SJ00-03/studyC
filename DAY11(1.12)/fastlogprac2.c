#include <stdio.h>
#include <string.h>
typedef struct{
    ip[80];
    int count;
}countIP;

int main (void)
{
    char ip[225];
    char count_ping[800];
    int ipcount = 0;
    int i = 0;
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


    for(int i = 0; i < cnt_ping; i++)
    {
        
    }
    
    fclose(fp);

    return 0;
}

