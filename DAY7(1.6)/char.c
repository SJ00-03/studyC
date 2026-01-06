
/* 1. 아스키 코드 --------------------------------------------------
#include <stdio.h>

int main(void)
{
    char small, cap = 'G';
    
    if((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');

    }

    printf("대문자: %c %c", cap, '\n');
    printf("소문자 : %c\n", small);

    return 0;

}
--------------------------------------------------------------------------------------------------*/

/*2번 scanf 함수를 사용한 문자 입력---------------------------------------------------------------

#include <stdio.h>
int main()
{
    char ch1, ch2;

    scanf(" %c %c", &ch1, &ch2);
    printf("[%c%c]", ch1, ch2);
    printf("\n");

    return 0;
}
-------------------------------------------------------------*/

/*3. getchar, putchar --------------------------------
#include <stdio.h>

int main()
{
    int ch; 
    

    ch = getchar();
    printf("입력한 문자: ");
    putchar(ch);
    putchar('\n');



    return 0;
}
    ---------------------------------------------------*/

/*4. scanf 함수가 문자를 입력하는 과정----------------

#include <stdio.h>

int main()
{
    char ch;
    int i;

    for(i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    
    printf("\n");

    return 0;
}
---------------------------------------------*/

/*5. scanf함수의 반환값 활용-----------------------------------

#include <stdio.h>

int main(void)
{
    int res;
    char ch;

    while(1)
    {
        res = scanf("%c", &ch);
        if(res == -1) break;
        printf("%d ", ch);
    }

    return 0;
}
--------------------------------------------------------*/

/*6. getchar 함수를 사용한 문자열 입력--------------------------------------------------------------

#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{   
    char str[7];

    my_gets(str, sizeof(str)); //주소와 크기를 넘겨줌
    printf("입력한 문자열: %s\n", str);

    return 0;
}

void my_gets(char *str, int size) //
{
    int ch;
    int i = 0;

    ch = getchar();
    while((ch != '\n') && (i < size -1))
    {
        str[i] = ch;
        i++;
        ch = getchar();    
    }
    str[i] = '\0';
}
---------------------------------------------------------------------------------*/

/* 다시해보기
#include <stdio.h>

int main(void)
{   
    char str[9];
    str[9] = getchar();
    printf(":::%s\n", str);

    return 0;
}
    */



/*7. 버퍼 지우기-------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
    int num;
    char grade;

    printf("학번 입력: ");
    scanf("%d", &num);
    
    printf("학점 입력: ");
    scanf(" %c", &grade); 
    printf("힉번: %d, 학점: %c\n", num, grade);
    
    return 0;
}
----------------------------------------------------------------------------------------*/