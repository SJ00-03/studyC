#include <stdio.h>

int main()
{
    int a = 1;
    int i;

    for (i = 0; i < 3; i++) // 0 1 2 총 3번 반복
    {
        a = a * 2;
    }
    printf("a: %d\n", a);

    return 0;
}

