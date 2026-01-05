#include <stdio.h>

double dtor(double deg)
{
    double radian = deg * 3.14 / 180;
    return radian; 
}

double rtod(double rad)
{
    double degree = rad * 180 / 3.14;
    return degree;
}

double avg(double x, double y)
{
    
}

int main()
{
    int choice;
    double angle;
    double DtoR, RtoD;

    printf("Degree to Radian은 1, Radian to Degree는 0을 입력하세요: ");
    scanf("%d", &choice);
    printf("변환하고 싶은 값을 입력하세요: ");
    scanf("%lf", &angle);

    if(choice == 0)
    {
        double changed = rtod(angle);
    }
    else if(choice == 1)
    {
        double changed = dtor(angle);
    }







    
}