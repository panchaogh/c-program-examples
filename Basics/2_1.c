#include<stdio.h>
int main(void){
    int i,j,sum;
    float avg;
    printf("请输入两个整数：");
    scanf("%d %d",&i,&j);
    sum = i + j;
    avg = sum / 2.0;
    printf("sum = %d\n",sum);
    printf("avg = %f\n",avg);
    return 0;
}