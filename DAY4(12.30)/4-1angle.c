#include <stdio.h>
#include <math.h>
double clipd(double x, double min, double max){
    if (x < min) return min;
    if (x > max) return max;
    return x;
}
int main()
{
    double torque, gear, eta, radius, mass, N, theta;
    double c = 0.021, SF = 1.23, gravity = 9.81;
    
    printf("총 질량[kg]을 입력하세요: ");
    scanf("%lf", &mass);
    printf("구동 모터 수를 입력하세요: ");
    scanf("%lf", &N);
    printf("모터의 정격 토크[Nm]를 입력하세요: ");
    scanf("%lf", &torque);
    printf("모터의 감속비를 입력하세요: ");
    scanf("%lf", &gear);
    printf("모터의 구동 효율을 입력하세요: ");
    scanf("%lf", &eta);
    printf("바퀴의 정격 반지름[m]을 입력하세요: ");
    scanf("%lf", &radius);
    printf("경사의 각도[degree]를 입력하세요: ");
    scanf("%lf", &theta); 

    double torq_total, F_avail, F_need, sin_max, theta_real, grade;
    double theta_max;

    theta_real = theta * 3.14 / 180;
    torq_total = N * torque * gear * eta;
    F_avail = torq_total / radius;
    F_need = mass * gravity * sin(theta_real) + c * mass * gravity;
    sin_max = clipd((F_avail/SF - c * mass * gravity) / (mass * gravity), 0, 1);
    theta_max = asin(sin_max);
    grade = tan(theta_max) * 100;

    printf("F_need: %.2lf\n", F_need);
    printf("F_avail: %.2lfN\n", F_avail);
    printf("Theta max: %.2lf\n", asin(sin_max));
    printf("등판율: %.2lf%%\n", grade);

    return 0;



    
}

