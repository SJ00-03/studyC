//이중 포인터 개념

/*1. 이중 포인터 활용 1

#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s. pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s. pb -> %s\n", pa, pb);

    return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
    char *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}
*/

/*2. 이중 포인터 활용 2*/

#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void)
{
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    return 0;
}

void print_str(char **pps, int cnt)
{
    int i;

    for(i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]);
    }
}
