#include <stdio.h>

char strcat_hm(char *str1, char *str2);

int main(void)
{
    char str[80] = "straw";
    

    strcat_hm(str, "berry");
    printf("%s\n", str);

    return 0;
}

char strcat_hm(char *str1, char *str2)
{
    int i = 0, j = 0;
    while(str1[i] != '\0')
    {
        i++;
    }
    
    while(str2[j] != '\0') //ncat 은 j < n추가
    {
        str1[j+i] = str2[j];
        j++;
    }
    str1[i+j] = '\0';

    return *str1;
}