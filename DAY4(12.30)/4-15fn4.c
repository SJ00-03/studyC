#include <stdio.h>

int get_num(void)
{
    int num;
    printf("양수 입력: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    int result, b, c, d, e, f, g, h, i, j;

    result = get_num();
    b = get_num();
    c = get_num();
    d = get_num();
    e = get_num();
    f = get_num();
    g = get_num();
    h = get_num();
    i = get_num();
    j = get_num();

    printf("반환값: %d\n", result);
    return 0;
}