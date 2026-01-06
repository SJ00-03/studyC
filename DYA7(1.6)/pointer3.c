/*1. 배열의 값을 출력하는 함수 ------------------------------------------------------------------------

#include <stdio.h>

void print_ary(int *pa);

int main(void)
{

}
--------------------------*/
/*2. 배열 요소의 개수가 다른 배열도 출력하는 함수 ---------------------------------------
#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};

    print_ary(ary1, 5);
    printf("\n");
    print_ary(ary2, 7);
    printf("\n");
    return 0;
}

void print_ary(int *pa, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
}
----------------------------------------------------*/

/*3. 배열에 값을 입력하는 함수 -----------------------------------------------------------------------

#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
    double ary[5];
    double max;
    int size = sizeof(ary)/sizeof(ary[0]);  //  40/8 = 5  배열의 길이, 유지 보수에 용이

    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열의 최댓값: %.1lf", max);
    printf("\n");

    return 0;
}

void input_ary(double *pa, int size)
{
    int i;

    printf("%d개의 실수값 입력: ", size);
    
    for(i = 0; i < size; i++)
    {
        scanf("%lf", pa + i);  //할 일을 다 해서 반환값이 void임
    }
}

double find_max(double *pa, int size)
{
    double max;
    int i;

    max = pa[0];
    for(i = 1; i < size; i++)
    {
        if(pa[i] > max) max = pa[i];
    }
    return max;
}

---------------------------------------------------------------------------------------------------------*/