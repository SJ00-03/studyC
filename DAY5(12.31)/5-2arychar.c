/*1번 -------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    char str[80] = "applejam";

    printf("최초 문자열: %s\n", str);
    printf("asdfd: ????%c????\n", str[6]);
    printf("문자열 입력: ");
    scanf("%s", str);
    printf("입력 후 문자열: %s\n", str);
    printf("??%c??\n", str[7]);
    printf("ASCII: %c %d\n", str[70], str[70]);

    return 0;
}
--------------------------------------------------------------------------*/

/*2번---------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    char str[80] = {'a', 'p', 'p', 'l', 'e', 'j', 'a', 'm'};
    printf("ASCII: %c %d\n", str[8], str[8]);
    str[0] = 'g';
    printf("ASCII: %c %d\n", str[1], str[1]);


    return 0;
}
---------------------------------------------------------------------*/

/*3번 문자열 대입------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

    return 0;
    
}
-------------------------------------------------------------------------*/

/*4번 gets puts---------------
#include <stdio.h>

int main()
{
    char str[10];

    printf("문자열 입력: ");
    gets(str); //fgets(str, 100, stdin)
    printf("입력된 문자열: ");
    puts(str);

    printf("scanf로 받을 문자열 입력: ");
    scanf("%s", str);
    printf("scanf로 받은 출력: %s\n", str);

    return 0;
}
------------------------------*/

/*5번 널문자가 없다면 --------------------------------------------
#include <stdio.h>

int main()
{
    char str[5];

    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n", str);
    
    return 0;
}
----------------------------------------------------------------*/

/*6번 fgets -------------------------------------------------------
#include <stdio.h>

int main()
{
    char str[10];
    

    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    printf("입력된 문자열: ");
    puts(str);

    printf("scanf로 받을 문자열 입력: ");
    scanf("%s", str);
    printf("scanf로 받은 출력: %s\n", str);

    return 0;
}
-----------------------------------------------------------------------*/