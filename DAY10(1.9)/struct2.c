/*1. 구조체 포인터와 -> 연산자
#include <stdio.h>

struct score
{
    int kor;
    int eng;
    int math;
};

int main(void)
{
    struct score yuni = {90, 80, 70};
    struct score *ps = &yuni;

    printf("국어: %d\n", (*ps).kor);
    printf("영어: %d\n", ps -> eng);
    printf("수학: %d\n", ps -> math);

    return 0;
}
*/

/*2. 구조체 배열*/

/*3. 구조체 배열을 처리하는 함수*/


/*4. 자기 참조 구조체       **************************중요중요중요*********************************

#include <stdio.h>

struct list
{
    int num;
    struct list *next;
};

int main(void)
{
    struct list a ={10, 0}, b = {20, 0}, c = {30, 0};
    struct list *head = &a, *current;

    a.next = &b;
    b.next = &c;

    printf("head -> num: %d\n", head->num);
    printf("head -> next -> num: %d\n", head->next->num);

    printf("list all: ");
    current = head;
    while(current != NULL)
    {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");

    return 0;
}

//싱글 링크드 리스트
//1. n1 -> n2 -> n3
//2. n1 -> n3
//3. n2 -> n3
//4. n3 -> n2 -> n1
//num순 정렬
*/

/*5. 공용체*/

/*6. 열거형*/

/*7. typedef  -----------중요--------------------

#include <stdio.h>

typedef struct{
    int num;
    double grade;
}student;

void print_data(student *ps);

int main(void)
{
    student s1 = {315, 4.2};

    print_data(&s1);

    return 0;
}

void print_data(student *ps)
{
    printf("학번: %d\n", ps -> num);
    printf("학점: %.1lf\n", ps -> grade);
}
    */