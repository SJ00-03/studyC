#include <stdio.h>

#define max 16
void label_check(int value[], int label[], int N, int threshold);
int count(int label[], int N);
int caculate(int count, int N, int label[]);
    

//메인함수
int main()
{
    int threshold = 0;
    int N; //센서의 개수
    int label[max];
    int value[max];
    

    printf("센서의 개수(1~%d개) 입력: ", max);
    scanf("%d", &N);
    
   
    printf("센서 측정값 입력: ");
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &value[i]);
    }

    printf("임계값 입력: ");
    scanf("%d", &threshold);

    //여기서부터 위에 만들어 놓은 함수를 사용하면 됨
    label_check(value, label, N, threshold);
   
    return 0;
}



void label_check(int value[], int label[], int N, int threshold)
{
    int cnt = 0;
    int sum_index = 0;
    printf("임계치가 넘는 위치\n");

    for(int i = 0; i < N; i++)
    {
        if(value[i] < threshold)
        {
            label[i] = 1;
            printf("%5d", i + 1);
            cnt += 1;
        } 
        else label[i] = 0;
    }
    printf("\n");

    for(int i = 0; i < N; i++)
    {
        sum_index += i * label[i];
    }
    double index_avg = (double)sum_index / (double)cnt;

    printf("임계치가 넘는 부분의 개수: %d\n", cnt);
    printf("중간 부분: %.2lf\n", index_avg);
    
}