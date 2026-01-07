#include <stdio.h>

int strlen_hm(char *str);

int main(void)
{
    char str1[80] = "apple";
    
    strlen_hm(str1); //1
    printf("%d\n", strlen_hm(str1)); // 함수 2 printf 3


}

int strlen_hm(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
    
        i++;
    }

    
    printf("%d\n", i);
    return i;
}