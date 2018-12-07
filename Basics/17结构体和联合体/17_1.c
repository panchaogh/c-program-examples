/**
 * 定义一个结构体变量,成员包括:职工号、姓名、性别、身份证号、工资、地址。
 * 要求:
 * 1. 从键盘输入一个数据,放到一个结构体变量中,并在屏幕上显示出来。
 * 2. 定义一个结构体数组,存放 N 个职工的信息,计算所有职工工资的合计值,并在屏幕上显示出来。
 */
#include <stdio.h>

#define N 5

int main(int argc, char *argv[]) {
    struct worker {
        char num[6]; //职工号
        char name[10]; //姓名
        char sex[2]; //性别
        int age; //年龄
        char idno[18]; //身份证号
        float salary; //薪资
        char addr[50]; //地址
    } w1[N], w2;
    float total = 0;
    printf("请输入一个职工的职工号、姓名、性别、年龄、身份证号、工资、地址\n");
    scanf("%s %s %s %d %s %f %s", w2.num, w2.name, w2.sex, &w2.age, w2.idno, &w2.salary, w2.addr);
    printf("输出职工的职工号、姓名、性别、年龄、身份证号、工资、地址\n");
    printf("%s %s %s %d岁 %s %f元 %s\n", w2.num, w2.name, w2.sex, w2.age, w2.idno, w2.salary, w2.addr);

    printf("请输入%d个职工的职工号、姓名、性别、年龄、身份证号、工资、地址\n", N);
    for (int i = 0; i < N; ++i) {
        scanf("%s %s %s %d %s %f %s", w1[i].num, w1[i].name, w1[i].sex, &w1[i].age, w1[i].idno, &w1[i].salary,
              w1[i].addr);
        total = total + w1[i].salary;
    }
    printf("输出%d个职工的工资合计值:\n", N);
    printf("%f", total);
    return 0;
}