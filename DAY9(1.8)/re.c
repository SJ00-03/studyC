/*
#include <stdio.h>

int main()
{
    int *pa;
    int a = 10;

    pa = &a;

    int size = sizeof(*pa);

    printf("%d\n", size);

    return 0;
}
*/

#include <stdio.h>

size_t strlen_hm(const char *s);

int main(void)
{
    char str[80];
    scanf("%s", str);
    
    strlen_hm(str);


}

size_t strlen_hm(const char *s)
{
    int i;
    while(i != '\n');

    return size;
}
