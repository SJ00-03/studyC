#include <stdio.h>
#include <string.h>

typedef struct{
    int num;
    char name[20];
    int kor;
    int eng;
    int math;
    int total;
    double avg;
    char grade;

}Student;

int main(void)
{
    Student info[5];

    int i, j;
    for(i = 0; i < 5; i++)
    {
        printf("학번: ");
        scanf("%d", &info[i].num);
        printf("이름: ");
        char name2[20];
        scanf("%s", name2);
        strcpy(info[i].name, name2);
        printf("국어, 영어, 수학 점수: ");
        scanf("%d %d %d", &info[i].kor, &info[i].eng, &info[i].math);
        printf("\n");
    }

    for(i = 0; i < 5; i++)
    {                
        info[i].total = info[i].kor + info[i].eng + info[i].math;        
    }  

    for(i = 0; i < 5; i++)
    { 
        
        info[i].avg = info[i].total / 3.0;  
                     
             
    }

    for(i = 0; i < 5; i++)
    {                
        if(info[i].avg >= 90) info[i].grade = 'A';
        else if(info[i].avg >= 80 && info[i].avg < 90) info[i].grade = 'B';
        else if(info[i].avg >= 70 && info[i].avg < 80) info[i].grade = 'C';
        else info[i].grade = 'F';

    }

    printf("# 정렬 전 데이터....\n");
    for(i = 0; i < 5; i++)
    {                
        printf("%5d %10s %10d %10d %10d %10d %10.1lf %10c\n", 
        info[i].num, info[i].name, info[i].kor,
        info[i].eng, info[i].math, info[i].total, info[i].avg, info[i].grade);

    } 

    printf("\n\n# 정렬 후 데이터....\n");

    //배열 순서 정해주기
    for(i = 0; i < 5; i++)
    {
        for(j = i+1; j < 5; j++)
        {
            if(info[i].avg < info[j].avg)
            {
                Student temp;
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }
    
    for(i = 0; i < 5; i++)
    {                
        printf("%5d %10s %10d %10d %10d %10d %10.1lf %10c\n", 
        info[i].num, info[i].name, info[i].kor,
        info[i].eng, info[i].math, info[i].total, info[i].avg, info[i].grade);

    } 


}