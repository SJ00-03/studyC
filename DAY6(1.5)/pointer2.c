//배열과 포인터

/*1. 배열명으로 배열 요소 사용하기-------------------------------

#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력: ");
    scanf("%d", ary + 2);

    for(i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    printf("\n%d\n", i);

    return 0;
}
-------------------------------------------------------------*/

/*2. 배열명 역할을 하는 포인터

#include <stdio.h>

int main(void)
{
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for(i = 0; i < 3; i ++)
    {
        printf("%5d", pa[i]);
    }
    printf("\n");

    return 0;
}

--------------------------------------------------*/

/*3. 배열명과 포인터의 차이--------------------------------------------------------
#include <stdio.h>

int main(void)
{
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    printf("배열의 값\n");
    for(i = 0; i < 3; i++)
    {
        printf("ary[%d]: %d ", i, *pa);
        printf("%u\n", pa);

        pa++; //마지막에 pa는 103인 상태로 프로그램 종료. 알아서 입력된 요소만큼(int, double, etc) 건너감

    }
    printf("%u\n", pa);
    pa += 1;
    printf("%u\n", pa);
    

    return 0;
}
---------------------------------------------------------------------------------------------*/


/*4. 포인터의 뺄셈과 관계 연산 -------------------------------------------------------------
#include <stdio.h>

int main()
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    int *pa = ary;
    int *pb = pa + 3;

    printf("pa: %u\n", pa); //주소
    printf("pb: %u\n", pb); //주소 + 3

    pa++ ; //주소 + 1
    printf("pb - pa: %u\n", pb - pa); //주소 + 3 - 주소 - 1 = 2

    printf("앞에 있는 배열 요소의 값 출력: ");
    if(pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0;
}
---------------------------------------------------------*/