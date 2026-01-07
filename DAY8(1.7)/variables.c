/*1. 지역 변수 */

/*2. 블록 안에서 사용하는 지역 변수*/

/*3. 전역 변수*/

#include <stdio.h>

void assign10(void);
void assign20(void);

int a; 

int main(void)
{
    
    printf("함수 호출 전 a 값: %d\n", a);
    
    assign10();
    assign20();

    printf("함수 호출 후 a 값: %d\n", a);

    return 0;
}

void assign10(void)
{
    a = 10;
}

void assign20(void)
{
    

    a = 20;
}