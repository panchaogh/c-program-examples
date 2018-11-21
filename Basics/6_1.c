#include<stdio.h>
int main(void){
    char name[20],sub[10];
    float score;
    printf("请输入：姓名、课程和成绩：");
    scanf("%s %s %f",name,sub,&score);
    printf("姓名：%s\n",name);
    printf("课程：%s\n",sub);
    printf("成绩：%5.1f\n",score);
    return 0;
}