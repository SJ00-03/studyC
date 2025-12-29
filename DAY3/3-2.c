#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int c = 324;
    int res;

    res = (a < b) ? a + b : c * b;
    printf("큰 값: %d\n", res);

    return 0;
}