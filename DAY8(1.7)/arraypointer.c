/* 1
#include <stdio.h>

void print_ary(int *pa, int size);

int main()
{
    int a[5];
    int size = sizeof(a)/sizeof(a[0]);

    print_ary(a, size);

    return 0;
}

void print_ary(int *pa, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        *(pa + i) = (i+1)*10;

        printf("%d ", pa[i]);
    }
    printf("\n");
}
*/

/* 2
#include <stdio.h>

void swap_int(int *x, int *y);

int main(void)
{
    int a = 3, b = 7;

    swap_int(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}

void swap_int(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
       
}
*/

#include <stdio.h>

int main(void)
{
    
    int N, i;
    scanf("%d", N); //배열의 개수
    
    int a[N];
    int size = sizeof(a)/sizeof(a[0]);

    for(i = 0; i < size; i++)
    {
        
        scanf("%d", &a[i]);
    }
    
    printf("int [%d] = ", N);
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
