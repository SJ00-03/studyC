/*
A번 문제 풀이
1-1 ary의 크기가 정해져있지 않아서 출력되지 않는다.
1-2 int ary[n] n에 양수의 정수를 넣어서 크기를 정해줘야한다.

2. sizeof(pa)는 포인터의 크기라서 8비트라서 제대로 출력되지않아. 8/4 = 2가 되는 거 같아. 
#include <stdio.h>

void print_ary(int *pa, int n)
{
    
    for (int i = 0; i < n; i++) printf("%d ", pa[i]);
    printf("\n");
}

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    print_ary(a, n);
}
3. 
#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int x[3] = {1, 2, 3};
    int y[7] = {1, 2, 3, 4, 5, 6, 7};

    print_ary(x, 3);
    print_ary(y, 7);

    return 0;
}

void print_ary(int *pa, int size)
{ 
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
    printf("\n");
}

4. 
*/
