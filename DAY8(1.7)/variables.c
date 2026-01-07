/*1. 지역 변수 
#include <stdio.h>

void assign(void);

int main(void);

int main(void)
{
    auto int a = 0;

    assign();
    printf("main 함수 a: %d\n", a);

    return 0;
}
*/

/*2. 블록 안에서 사용하는 지역 변수
#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    printf("교환 전 a와 b의 값: %d, %d\n", a, b);

    {
        int temp;

        temp = a;
        a = b;
        b = temp;

    }
    printf("교환 후 a와 b의 값: %d, %d\n", a, b);
    
    return 0;
}
*/

/*3. 전역 변수

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

*/

/*4. 정적 지역 변수

#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
    int i;

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for(i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for(i = 0; i < 3; i++)
    {
        static_func();
    }

    return 0;

}

void auto_func(void)
{
    auto int a = 0;

    a++;
    printf("%d\n", a);

}


void static_func(void)
{
    static int a = 0;

    a++;
    printf("%d\n", a);

}
*/


/*5. 레지스터 변수

#include <stdio.h>

int main(void)
{
    int i;
    auto int sum = 0;

    for(i = 1; i <= 100000000; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
*/

/*6. 값을 복사해서 전달하는 방법*/

/*7. 주소를 전달하는 방법*/

/*8. 주소를 반환하는 함수            ???????????

#include <stdio.h>

int *sum(int a, int b);

int main(void)
{
    int *resp;

    resp = sum(10, 20);
    printf("두 정수의 합: %d\n", *resp);

    return 0;
}

int *sum(int a, int b)
{
    static int res; //static 사용하는 거 주의하기

    res = a + b;

    return &res;
}

*/

