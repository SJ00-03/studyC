/*1. 구조체 선언과 멤버 사용
#include <stdio.h>

struct student
{
    int num;
    double grade;
};

int main(void)
{
    struct student aaa;

    aaa.num = 2;
    aaa.grade = 2.7;

    printf("학번: %d\n", aaa.num);
    printf("점수: %.1lf\n", aaa.grade);

    return 0;
}
*/

/*2. 구조체 변수의 크기
#include <stdio.h>
struct checksize1
{
    char ch1;
    short num;
    char ch2;
    int score;
    double grade;
    char ch3;
};

struct checksize2
{
    char ch1;
    short num;
    char ch2;
    char ch3;
    int score; //어차피 24바이트라 double로하면 영향이 있긴함 어차피 정보를 읽음
    //패딩 바이트는 줄이고 굳이 남아있는 메모리를 채울 필욘 없다
    double grade;
    
};

//포인터 사용해서 비어있는 곳 확인도 가능
int main(void)
{
    struct checksize1 one;
    int size1 = sizeof(one);
    
    struct checksize2 two;
    int size2 = sizeof(two);

    printf("%d %d\n", size1, size2);

    return 0;

}
*/


/*3. 다양한 구조체 멤버
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char *intro;

};

int main(void)
{
    struct profile yuni;
    strcpy(yuni.name, "서하윤");
    yuni.age = 17;
    yuni.height = 164.5;

    int intro_size;
    printf("희망하는 자기소개 길이 입력: ");
    scanf("%d", &intro_size);
    yuni.intro = (char *)malloc(intro_size * 2);
    if(yuni.intro == NULL)
    {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }
    printf("자기소개 입력(%d자 이내): ", intro_size);
    getchar();
    fgets(yuni.intro, intro_size * 2, stdin);

    printf("이름: %s\n", yuni.name);
    printf("나이: %d\n", yuni.age);
    printf("키: %.1lf\n", yuni.height);
    printf("자기소개: %s\n", yuni.intro);

    free(yuni.intro);

    return 0;
}
*/

/*4. 구조체의 멤버로 다른 구조체 사용하기

#include <stdio.h>

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
    
};

int main(void)
{
    struct student yuni;

    yuni.pf.age = 17;
    yuni.pf.height = 164.5;
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("나이: %d\n", yuni.pf.age );
    printf("키: %.1lf\n", yuni.pf.height);
    printf("학번: %d\n", yuni.id);
    printf("학점: %.1lf\n", yuni.grade);
    
    return 0;

}
*/


/*5. 구초제 변수의 초기화와 대입 연산


#include <stdio.h>

struct student
{
    int id;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s1 = {315, "홍길동", 2.4}, s2 = {316, "이순신", 3.7}, s3 = {317, "세종대왕", 4.3};
    
    struct student max;

    max = s1;
    if(s2.grade > max.grade) max = s2;
    if(s3.grade > max.grade) max = s3;


    
    printf("학번: %d\n", max.id);
    printf("이름: %s\n", max.name);
    printf("학점: %.1lf\n", max.grade);

    return 0;

}
*/



/*6. 구조체 변수를 함수의 매개변수에 사용하기
#include <stdio.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange (struct vision robot);

int main(void)
{
    struct vision robot1;

    printf("시력 입력: ");
    scanf("%lf%lf", &(robot1.left), &(robot1.right));
    robot1 = exchange(robot1);
    printf("바뀐 시력: %.lf %.lf\n", (robot1.left), (robot1.right));

    return 0;
}

struct vision exchange (struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    
    return robot;
}

*/

