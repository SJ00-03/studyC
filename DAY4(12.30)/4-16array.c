#include <stdio.h>

int main(void)
{
    int ary[5];

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    scanf("%d", &ary[3]);

    printf("%d\n", ary[2]);
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]); //쓰레기 값

    int ary1[5] = {1, 2, 3, 4, 5};
    int ary2[4] = {1, 2, 3};
    

    return 0;
    
}