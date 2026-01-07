#include <stdio.h>

int strcmp_hm(char *str1, char *str2);

int main(void)
{
    char str1[80] = "pear";
    char str2[80] = "pear";

    
    printf("%d\n", strcmp_hm(str1, str2));

}


int strcmp_hm(char *str1, char *str2)
{
    int i = 0, j = 0;
    char later;
    while(j == 0 && (str1[i] != '\0' && str2[i] != '\0')) // 추가 && i < n
    {
        
        if(str1[i] > str2[i]) j = 1;
        else if(str1[i] < str2[i]) j = -1;
        else j = 0;
        i++;
    }
    

    return j;
}

