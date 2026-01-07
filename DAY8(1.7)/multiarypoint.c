//14장 다차원 배열과 포인터 배열

/*1. 2차원 배열 선언과 요소 사용

#include <stdio.h>

int main(void)
{
    int score[3][4];
    int total;
    double avg;
    int i, j;

    for(i = 0 ; i < 3; i++)
    {
        printf("4과목의 점수 입력: ");
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    for(i = 0 ; i < 3; i++)
    {
        total = 0;
        for(j = 0; j < 4; j++)
        {
            total += score[i][j];
        }
        avg = total / 4.0;
        printf("총 점수: %d 평균: %.2lf\n", total, avg);
    }
}
*/

/*2. 2차원 배열 초기화*/

/*3. 2차원 char 배열
#include <stdio.h>

int main(void)
{
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal) / sizeof(animal[0]);

    for(i = 0; i < count; i++)
    {
        scanf("%s", animal[i]);
    }
    printf("\n");
    for(i = 0; i < count; i++)
    {
        printf("%s\n", animal[i]);
    }

    return 0;
}
*/

/*4. 2차원 char 배열 초기화*/

/*5. 3차원 배열
#include <stdio.h>

int main(void)
{
    int score[2][3][4] = {
        {{72, 80, 95, 60}, {78, 90, 75, 50}, {76, 86, 94, 40}},
        {{82, 40, 65, 50}, {82, 90, 85, 70}, {52, 87, 95, 50}}
    };

    int i, j, k;

    for(i = 0; i < 2; i++)
    {
        printf("%d반 점수...\n", i + 1);
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("%5d", score[i][j][k]);
            }
            
        }
        printf("\n");

    }
    printf("\n");
}
*/

/*6. 포인터 배열 선언과 사용

#include <stdio.h>

int main(void)
{
    char *pray[5];
    int i;

    pray[0] = "dog";
    pray[1] = "elephant";
    pray[2] = "horse";
    pray[3] = "tiger";
    pray[4] = "lion";

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", pray[i]);
    }

    return 0;
}
*/

/*7. 2차원 배열처럼 활용하는 포인터 배열

#include <stdio.h>

int main()
{
    int ary1[4] = {1, 2, 3, 4};
    int ary2[4] = {11, 12, 13, 14};
    int ary3[4] = {21, 22, 23, 24};
    int *pary[3] = {ary1, ary2, ary3};
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }
    return 0;

}
*/
