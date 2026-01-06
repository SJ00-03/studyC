#include <stdio.h>

int main()
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    print_month(month); 
}

void print_month(int *mp)
{
    
    int i;
    for(i = 0; i < 12; i++) //출력을 12번 반복
    {
        printf("%d ", mp[i]); //각 달의 일 수 출력
        if(i % 5 == 4) printf("\n"); //출력 개수가 5의 배수라면 줄 바꿈
    }
    printf("\n");
}

