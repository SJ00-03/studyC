/*파일 입출력*/

/*1. 파일 개방과 폐쇄
#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen ("a.txt", "r"); //내 워크 스페이스 안에 있을 때 파일명 만약 다른 곳에 있으면 "c.//asdfsdfa" 전부 다 적어줘야함
    if(fp == NULL)
    {
        printf("파일이 열리지 않았습니다. \n");
        return 1;
    }
    printf("파일이 열렸습니다. \n");
    fclose(fp);

    return 0;
}
*/

/*2. 문자 입력 함수 fgetc
#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp = fopen ("a.txt", "r"); 
    if(fp == NULL)
    {
        printf("파일이 열리지 않았습니다. \n");
        return 1;
    }

    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
*/


/*3. 문자 출력 함수 fputc

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int i;
    char str[] = "banana";

    fp = fopen ("c.txt", "a"); 
    if(fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    else printf("파일이 열렸습니다.\n");

    i = 0;

    while(str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }
    
    fputc('\n', fp);
    fclose(fp);

    return 0;
}
*/

/*4. 기본적으로 개방되는 표준 입출력 스트림 파일
#include <stdio.h>

int main(void)
{
    int ch;

    while(1)
    {
        ch = getchar();
        if(ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
    return 0;
}
*/


/*5. 기본적으로 개방되는 표준 입출력 스트림 파일(2)
#include <stdio.h>

int main(void)
{
    int ch;

    while(1)
    {
        ch = fgetc(stdin);
        if(ch == EOF)
        {
            break;
        }
        fputc(ch, stdout);
    }
    return 0;
}
    */



    
