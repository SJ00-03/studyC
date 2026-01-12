#include <stdio.h>

typedef struct{
    int x;
    int y;
}Position;

void move(Position *p, int dx, int dy);

int main()
{
    int movecount;
    int movex;
    int movey;
    int i;

    Position coordinate;

    coordinate.x = 0;
    coordinate.y = 0;
    printf("로봇의 현재 위치: (%d, %d)\n\n", coordinate.x, coordinate.y);

    printf("로봇을 이동하고 싶은 횟수 입력: ");
    scanf("%d", &movecount);

    for(i = 0; i < movecount; i++)
    {
        printf("이동할 x좌표: ");
        scanf("%d", &movex);
        printf("이동할 y좌표: ");
        scanf("%d", &movey);
        move(&coordinate, movex, movey);
        printf("이동한 로봇의 위치: (%d, %d)\n\n", coordinate.x, coordinate.y);

    }
    if(i == movecount) printf("\n로봇의 최종 위치: (%d, %d)\n", coordinate.x, coordinate.y);
    
    
       
}

void move(Position *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}