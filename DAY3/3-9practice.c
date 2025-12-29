#include <stdio.h>

int main(void)
{
    double I_load = 5, vel = 7.4, R = 0.1; //평균전류, 평균속도, 예비율(0~1)
    double voltage, capacity, eta; //공칭전압, 용량, 시스템 효율
    

    printf("---------사전 정보---------\n");
    printf("평균 전류, 평균 속도, 예비율 : %.2lf[A], %.2lf[km/h], %.2lf\n", I_load, vel, R);
    
    printf("---------배터리 정보 입력 ---------\n");
    printf("공칭 전압[V]을 입력하세요: ");
    scanf("%lf", &voltage);
    printf("배터리 용량[Ah]을 입력하세요: ");
    scanf("%lf", &capacity);
    printf("시스템 효율을 입력하세요: ");
    scanf("%lf", &eta);


    double E_usable = voltage * capacity * eta * (1-R); //사용 가능한 에너지 [Wh]
    double E_use = voltage * I_load / eta * 2; //소비 전력 [W]
    double run_t = E_usable / E_use; //런타임 [h]
    double run_distance = vel * run_t; //주행거리

    printf("사용 가능한 에너지[Wh]: %.2lf[Wh]\n", E_usable);
    printf("소비 전력[W]: %.2lf[W]\n", E_use);
    printf("런타임[h]: %.2lf[h]\n", run_t);
    printf("주행 거리[km]: %.2lf[km]\n", run_distance);

    return 0;

}