#include <stdio.h>

double DtoR(double x)
{
    double degree = x * 3.14 / 180;
    
    return degree;
}
double RtoD(double y)
{
    double radian = y * 180 / 3.14;
    
    return radian;
}

int main(void)
{
    double x, theta, theta_changed;
    
    printf("Degree to Radian 1입력, Radian to Degree 2입력: ");
    scanf("%lf", &x);

    if(x == 1)
    {
        printf("Degree를 입력하세요: ");
        scanf("%lf", &theta);
        theta_changed = DtoR(theta);
        printf("Degree to Radian: %.2lf\n", theta_changed);
        
    }
    else if(x == 2)
    {
        printf("Radian을 입력하세요: ");
        scanf("%lf", &theta);
        theta_changed = RtoD(theta);
        printf("Radian to Degree: %.2lf\n", theta_changed);
    }
    else
    {
        printf("입력값을 확인하세요.\n");
    }
    return 0;
}