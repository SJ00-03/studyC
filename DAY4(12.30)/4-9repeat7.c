#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum += i;
        if(sum > 30) break;//루프를 빠져나간다 (한 블록을 빠져나간다)
    }

    printf("누적한 값: %d\n", sum);
    printf("마지막으로 더한 값: %d\n", i);

    return 0;
}