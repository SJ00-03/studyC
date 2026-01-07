/*1. 문자열을 대입하는 strcpy 함수 ------------------------------
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana";
    char *ps2 = str2;

    printf("최초 문자열: %s\n", str1); //strawberry
    strcpy(str1, str2); 
    printf("바뀐 문자열: %s\n", str1); //apple
    printf("%c\n", str1[5]);
    printf("%c\n", str1[6]);
    printf("%c\n", str1[7]);

    
    strcpy(str1, ps1);
    printf("바뀐 문자열: %s\n", str1); //banana

    strcpy(str1, ps2);
    printf("바뀐 문자열: %s\n", str1); //apple
    
    strcpy(str1, "banana");
    printf("바뀐 문자열: %s\n", str1); //banana
}
*/


/*2. 원하는 개수의 문자만을 복사하는 strncpy 함수 ----------------------------------*/


/*3. 문자열을 붙이는 strcat, strncat 함수 -----------------------------------------*/


/*4. 문자열 길이를 계산하는 strlen 함수 --------------------------------------------

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80], str2[80];
    char *resp;

    printf("2개의 과일 이름 입력: ");
    scanf("%s%s", str1, str2);
    if(strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;
    printf("이름이 더 긴 과일은: %s\n", resp);

    return 0; 

}
*/



/*5 문자열으 비교하는 strcmp, strncmp 함수 ---------------------------------------
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = {'a', '\0', 'b', '\n'};
    printf("%ld\n", strlen(str1));
    printf("%ld\n", sizeof(str1));

    return 0;
}
    */
