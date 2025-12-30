#include <stdio.h>

int main()
{
    int a = 1;

    while(a < 10)//16일때도 올라와서 조건이랑 비교하고 거짓이면 빠져나감
    {
        a *= 2; //a = a * 2    
    }
    printf("a: %d\n", a);

    return 0;
}