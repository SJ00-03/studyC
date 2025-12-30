#include <stdio.h>
#include <math.h>

int main()
{
    double radius, width, e_L, e_R, distance;
    double left, right;

    printf("바퀴의 반지름[m]을 입력하세요: ");
    scanf("%lf", &radius);
    printf("트랙폭[m]을 입력하세요: ");
    scanf("%lf", &width);
    printf("왼쪽 바퀴 오차율을 입력하세요: ");
    scanf("%lf", &e_L);
    printf("오른쪽 바퀴 오차율을 입력하세요: ");
    scanf("%lf", &e_R);
    printf("목표 주행거리[m]를 입력하세요: ");
    scanf("%lf", &distance);

    double wheel_turn = distance / (radius * 2 * 3.14);
    double r_L = radius * (1 + e_L), r_R = radius * (1 + e_R); // 바퀴 반경
    double D_L = 2*3.14*r_L*wheel_turn, D_R = 2*3.14*r_R*wheel_turn;//바퀴의 유효 이동거리
    double Rc = (width / 2) * ((D_L+D_R)/(D_R-D_L)); //곡선 궤적
    double delta = distance/Rc; // 편류각
    double d_drift = Rc*(1-cos(delta)); //편류 거리
    
    printf("왼쪽 / 오른쪽 바퀴 반경: %.2lf[m] / %.2lf[m]\n", r_L, r_R);
    printf("곡률 반경(Rc): %.2lfm\n", Rc);
    printf("편류각(delta): %.2lfdeg\n", delta * 180 / 3.14);
    printf("편류 거리[m] = %.2lfm\n", d_drift);
    
    return 0;
    
}