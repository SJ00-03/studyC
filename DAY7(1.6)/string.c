
/*1번 문자열 상수 구현 방법--------------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    printf("apple이 저장된 시작 주소 값: %p\n", "apple");
    printf("두 번째 문자의 주소 값: %p\n\n", "apple" + 1);
    printf("첫 번째 문자: %c\n", *"apple");
    printf("두 번째 문자: %c\n\n", *("apple"+1));
    printf("배열로 표현한 세 번째 문자: %c\n", "apPle"[2]);

    return 0;
}
----------------------------------------------------------------------------------------------------------*/

/*2번 char 포인터로 문자열 사용 (상수로 사용?)----------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    char *dessert = "apple";

    printf("오늘 후식은 %s입니다.\n", dessert); 
    //%s
    //while(*dessert != '\0')
    //{
    //  putchar(*dessert);
    //  dessert++;
    //}

    dessert = "banana"; 
    printf("내일 후식은 %s입니다.\n", dessert);

    return 0;
}
-----------------------------------------------------------------------------------------*/

/*3번 scanf함수를 사용한 문자열 입력-------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    char str[80];

    printf("문자열 입력: ");
    scanf("%s", str);
    printf("첫 번째 단어: %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어: %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 세 번째 단어: %s\n", str);


    return 0;
}
---------------------------------------------------------------------*/

/*4번 gets 함수를 사용한 문자열 입력
#include <stdio.h>

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력: ");
    gets(str);
    printf("입력한 문자열 %s입니다.\n", str); //null이 들어가 있는 거 확인방법? 다시 해보기

    return 0;
}
----------------------------------------------------------------------------------------*/

/*5번 fgets 함수를 사용한 문자열 입력----------------------------------------------------------

#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];

    printf("공백이 포함된 문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    printf("\n");

    printf("입력된 문자열은 %s입니다.\n", str);
    printf("\n");
    
    str[strlen(str)-1] = '\0';
    printf("입력된 문자열은 %s입니다.\n", str);
    return 0;
}
--------------------------------------------------------------------------------------*/

/*6번 표준 입력 함수의 버퍼 공유 문제-----------------------------------------------------------

#include <stdio.h>

int main(void)
{
    int age;
    char name[20];

    printf("나이 입력: ");
    scanf("%d", &age);

    getchar(); //scanf("*%c")    fgetsc(stdin) 이 두 개도 사용할 수 있는거야?

    printf("이름 입력: ");
    gets(name);
    printf("나이: %d, 이름: %s\n", age, name);

    return 0;
    
}
---------------------------------------------------------------------------------------------*/
/*7번 문자열을 출력하는 puts, fputs--------------------------------
#include <stdio.h>

int main()
{
    char str[80] = "apple juice";
    char *ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("\nmilk");

    return 0;
}
----------------------------------------------------------------------*/
/*
#include <stdio.h>
int main(void)
{
    char *pc = "mango";
    
    printf("%ld\n", sizeof(pc));

    return 0;
}
*/

#include <stdio.h>

int main(void)
{
    char ani[20];
    char why[80];

    printf("좋아하는 동물: ");
    scanf("%s", ani); //여기에서 dog\n
    

    printf("좋아하는 이유: ");
    getchar(); //
    fgets(why, sizeof(why), stdin); // 버퍼에 남아있는 \n을 입력해버림
    printf("%s is %s", ani, why);
    printf("%d", why[0]);

    printf("\n");
    return 0;
}

/*8번 문자열을 대입하는 strcpy 함수
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
    
    strcpy(str1, ps1);
    printf("바뀐 문자열: %s\n", str1); //banana

    strcpy(str1, ps2);
    printf("바뀐 문자열: %s\n", str1); //apple
    
    strcpy(str1, "banana");
    printf("바뀐 문자열: %s\n", str1); //banana

}
*/