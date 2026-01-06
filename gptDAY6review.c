#include <stdio.h>

void print_array(const int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%d] = %d ", i, *(a + i));
    }
    printf("\n");
}

int main()
{
    int ary1[5] = {1, 2, 3, 4, 5};
    int ary2[4] = {1, 2, 3};

    print_array(ary1, 5);
    print_array(ary2, 4);
    
    return 0;

}