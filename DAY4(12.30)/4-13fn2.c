#include <stdio.h>

double avg(double x, double y)
{
    double average = (x+y) / 2;

    return average;
}

int main(void)
{
    double a, b;
    double result;
    printf("평균을 구하고 싶은 두 수를 입력하세요:");
    scanf("%lf %lf", &a ,&b);

    result = avg(a, b);
    printf("두 수의 평균값: %.1lf\n", result);

    return 0;


}