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

#include <stdio.h>

/*3번 포인터 연습 ----------------------------------
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