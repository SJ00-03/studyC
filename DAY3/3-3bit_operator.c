#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 12;

    printf("a & b : %d\n", a & b);
    printf("a ^ b : %d\n", a ^ b); //xor - 하나만 참일 때 결과 1
    printf("a | b : %d\n", a | b);
    printf("~a : %d\n", ~a); //부정 연산자
    printf("a << 1 : %d\n", a << 1); //shift 
    printf("a >> 2 : %d\n", a >> 2); //shitt 

    return 0;
}