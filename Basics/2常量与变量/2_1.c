#include<stdio.h>
/**
 * 要求输入两个整数 a 和 b,求二者的和 sum 和平均数 avg(float 类型)
 * @return
 */
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