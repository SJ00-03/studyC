/*1번 난수 ----------------다시 보기-------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand(time(NULL)); //랜덤 초기화

    int r1 = rand() % 10; // 0 ~ 9
    int r2 = rand() % 100 +1; // 1 ~ 100
    int r3 = rand() % 21 - 10; // -10 ~ 10

    printf("0~9랜덤: %d\n", r1);
    printf("1~100랜덤: %d\n", r2);
    printf("-10~10랜덤: %d\n", r3);

    return 0;
}
-----------------------------------------------------------------*/

