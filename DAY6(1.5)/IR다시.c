#include <stdio.h>

#define max 16
//임계치가 넘는 자리를 찾는 함수
int label_check(int value[], int label[], int N, int threshold)
{
    for(int i = 0; i < N; i++)
    {
        if(value[i] < threshold) label[i] = 1;
        else label[i] = 0;
    }
    return label[N];
    }
//임계치가 넘는 개수 구하는 함수
int count(int label[], int N)
{
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if(label[i] == 1) count += 1;

        return count;
    }
}
//중간 찾기 함수
int caculate(int count, int N, int label[])
{
    int sum_index = 0;
    for(int i = 0; i < N; i++)
    {
        sum_index += i * label[i];
    }
    int index_avg = sum_index / count;
    return index_avg;

}
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
    int check_label = label_check(value, label, N, threshold);
    int cnt = count(label, N);
    int middle = caculate(cnt, N, label);

    printf("%d\n", check_label);
    printf("%d\n", cnt);
    printf("%d\n", middle);



    
    return 0;
}


