/*1번 주소 출력하기 ---------------------------------------------------------
#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;

    printf("int형 변수의 주소: %u\n", &a); //시작점의 주소
    printf("double형 변수의 주소: %u\n", &b);
    printf("char형 변수의 주소: %u\n", &c);

    return 0;
}
    --------------------------------------------------*/

    /*2번 포인터 --------------------------------
#include <stdio.h>
int main(void)
{
    int a;
    int *pa;

    pa = &a;
    *pa = 10;

    printf("포인터로 a 값 출력: %d\n", *pa); //pa의 값 == pa안에 있는 주소에 있는 값
    printf("변수명으로 a 값 출력: %d\n", a);

    return 0;
}
    ------------------------------*/



/*3번 포인터 연습 ----------------------------------
#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb;
    int *pt = &total; // == pt = &total
    double *pg = &avg; // == pg = &avg

    pa = &a; //a의 주소를 넣음
    pb = &b; //b의 주소를 넣음
    *pt = *pa + *pb; //pt의 주소에 있는 값(total의 값) = a의 값 + b의 값 
    *pg = *pt / 2.0;

    printf("두 정수의 값: %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 평균:%.1lf\n", *pg);

    return 0;
}
    ---------------------------------------------------------*/

/*4번 포인터 연습 ------------------------------------------
#include <stdio.h>

int main(void)
    {
        int a = 10, b = 20;
        const int *pa = &a; //const 사용시 *pa = 20 불가능

        printf("변수 a의 값: %d\n", *pa);
        pa = &b;
        printf("변수 b의 값: %d\n", *pa);
        pa = &a;
        a = 20;
        printf("변수 a의 값: %d\n", *pa);

        return 0;
    }

      ------------------------------------------*/

/*5번 주소와 포인터의 크기----------------------------
#include <stdio.h>

int main(void)
{
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기: %d\n", sizeof(&db));
    printf("\n");
    printf("char * 포인터의 크기: %d\n", sizeof(pc)); //주소를 담아야하기 떄문에 8바이트
    printf("int * 포인터의 주소 크기: %d\n", sizeof(pi));
    printf("double * 포인터의 주소 크기: %d\n", sizeof(pd));
    printf("\n");
    printf("char * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd));
      
    return 0;
}

--------------------*/

/*6번 포인터의 대입 규칙----------------------------
#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    int *pd;

    pd = p;
    
    printf("%d\n", *pd);
    

    return 0;
}


#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;
    
    printf("%lf\n", *(double *)pd);
    

    return 0;
}

------------------------------------*/

/*7-1번 포인터를 쓰는 이유 ----------------------다시해보기--------------------
#include <stdio.h>

int swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
    
    return x, y;
}

int main(void)
{
    int a = 10, b = 20;

    int ca, cb = swap(a, b);
    printf("a: %d, b: %d\n", ca, cb);
    
    return 0;
}
----------------------------------*/

/*7-2번 포인터를 쓰는 이유 ------------------------------------------
#include <stdio.h>

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    
    return 0;
}
------------------------------------------------------------------*/

