#include <stdio.h>

typedef struct{
    double left;
    double right;
}WheelSpeed;

typedef struct{
    double linear;
    double angular;
}RobotSpeed;

struct RobotSpeed computeSpeed(struct WheelSpeed w, double wheel_radius, double wheel_distance);

int main(void)
{
    double speed_L;
    double speed_R;
    double radius;
    double wh_to_wh;
    
    printf("왼쪽 바퀴 속도(rad/s): ");
    scanf("%lf", speed_L);
    printf("왼쪽 바퀴 속도(rad/s): ");
    scanf("%lf", speed_R);
    printf("바퀴 반지름(m): ");
    scanf("%lf", radius);
    printf("바퀴 간 거리(m): ");
    scanf("%lf", wh_to_wh);

    RobotSpeed speed1;

    speed1.linear = radius * (speed_L + speed_R) / 2;
    speed1.angular = radius * (speed_L - speed_R) / 2;
}