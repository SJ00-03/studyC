#include <stdio.h>

int main(void)
{
    double mass, SF, DM, Radius, torque, G, W;
    double Fmin, Fmotor;
    int N;
    const double c = 0.018, g = 9.81; //구름저항계수(c)와 중력 가속도(g)

    printf("총 하중(kg)을 입력하세요 : ");
    scanf("%lf", &mass);
    printf("안전 계수를 입력하세요 : ");
    scanf("%lf", &SF);
    printf("설계 마진을 입력하세요 : ");
    scanf("%lf", &DM);
    printf("바퀴 반지름(m)을 입력하세요 : ");
    scanf("%lf", &Radius);
    printf("모터 정격 토크(Nm)를 입력하세요 : ");
    scanf("%lf", &torque);
    printf("감속비를 입력하세요 : ");
    scanf("%lf", &G);
    printf("구동 바퀴 수를 입력하세요 : ");
    scanf("%d", &N);
    
    
    W = mass * g;
    Fmin = c * W * SF * DM;
    Fmotor = torque * G * Radius / (double)N;

    printf("필요한 견인력: %.2lf\n", Fmin);
    printf("모터가 낼 수 있는 견인력: %.2lf\n", Fmotor);


    if(Fmin <= Fmotor)
    {
        printf("판정: 만족\n");
    }
    else
    {
        printf("판정: 불만족 (더 큰 토크, 감속비, 바퀴 반지름 또는 구동 바퀴 수 줄이기가 필요합니다!)\n");
    }

    return 0;



}