/*1. malloc, free 함수

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if (pi == NULL)
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));
    
    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용: %d\n", *pi);
    printf("실수형으로 사용: %.1lf\n", *pd);

    free(pi);
    free(pd);

    return 0;
}
*/

/*2. 동적 할당 영역을 배열처럼 쓰기
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    int i, sum = 0;

    pi = (int *)malloc(5 * sizeof(int));
    if (pi == NULL)
    {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }

    printf("다섯 명의 나이를 입력하세요: ");
    for(i = )
}
*/

/*3. 기타 동적 할당 함수 */
