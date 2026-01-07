#include <stdio.h>

char strrcpy_hm(char *str1, char *str2);

int main(void)
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";

    strrcpy_hm(str1, str2);
    printf("%s\n", str1);

    return 0;
}

char strrcpy_hm(char *str1, char *str2)
{
    int i = 0;
    while(str2[i] != '\0') //&& i < n 찾기
    {
        
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';

    return *str1;
}
