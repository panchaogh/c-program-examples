//
// Created by panchao on 18-12-13.
//

#include <stdio.h>
#include <stdlib.h>
#include <printf.h>
#include <string.h>
#include "AddressBook.h"

AddressBook addressBooks[STORAGE_MAX]; //定义通讯录存储
int countPerson = 0; //总人数

/**
 * //菜单列表
 * @return
 */
Option menuList() {
    char s[80];/*以一行80个字符为限，多余的部分不从键盘读取*/
    int c = 0;
    system("clear");/*清屏*/
    printf("\n");
    PRINT_FORMAT3;
    printf("*                                          *\n");
    printf("*        通  讯  录  管  理  系  统        *\n");
    printf("*                  主菜单                  *\n");
    printf("*                                          *\n");
    printf("*             0. 增加联系人信息            *\n");
    printf("*             1. 删除联系人信息            *\n");
    printf("*             2. 查找联系人信息            *\n");
    printf("*             3. 插入联系人信息            *\n");
    printf("*             4. 保存联系人文件            *\n");
    printf("*             5. 从文件加载联系人信息      *\n");
    printf("*             6. 显示所有联系人信息        *\n");
    printf("*             7. 退出管理系统              *\n");
    printf("*                                          *\n");
    PRINT_FORMAT4;
    printf("\n");
    do {
        printf("请选择对应的序号(0~7):"); //提示输入选项
        scanf("%s", s); //输入选择项
        c = atoi(s); //将输入的字符串转化为整型数

    } while (c < 0 || c > 7); //选择项不在0~7之间重输
    return c; //返回选择项，主程序根据该数调用相应的函数
}

/**
 * 新增通讯录数据
 */
void addAddressBook() {
    int n;
    system("clear");/*清屏*/
    printf("请输入当前增加的联系人总个数：");//提示信息
    scanf("%d", &n); //输入记录数
    printf("请输入记录：\n"); //提示输入记录
    PRINT_FORMAT2;
    PRINT_FORMAT1;
    for (int i = 0; i < n; i++) {
        scanf("%s", addressBooks[i].name); //不用加&, 因为在C语言中数组名就代表该数组的起始地址
        scanf("%s", addressBooks[i].phone);
    }
    PRINT_FORMAT1;
    countPerson = n;
    printf("增加通讯录数据成功，按任意键继续！");
    getchar();
    getchar();
}

/**
 * 根据名称查询通讯录信息
 * @param name
 */
int selectByName(char name[]) {
    int i;
    for (i = 0; i < countPerson; i++) {
        if (strcmp(name, addressBooks[i].name) == 0) {
            return i;
        }
    }
    return -1;
}

/**
 * 根据名称展示通讯录信息
 * 如果名称为NULL，则全部显示
 */
void showByName() {
    int i;
    char name[50]; /*记录要查找的联系人姓名*/
    system("clear");/*清屏*/
    printf("请输入要查找的联系人姓名:\n");
    scanf("%s", name); /*输入要查找的联系人姓名*/
    PRINT_FORMAT3;
    PRINT_FORMAT2;
    PRINT_FORMAT1;
    i = selectByName(name);
    if (i == -1) {
        printf("未找到，请确认有此用户存在！\n");
    } else {
        printf("%-16s%-11s\n", addressBooks[i].name, addressBooks[i].phone);
    }
    PRINT_FORMAT4;
    printf("按任意键继续！");
    getchar();
    getchar();
}

/**
 * 展示通讯录信息
 */
void showAll() {
    int i;
    system("clear");/*清屏*/
    PRINT_FORMAT3;
    PRINT_FORMAT2;
    PRINT_FORMAT1;
    for (i = 0; i < countPerson; i++) {
        printf("%-16s%-11s\n", addressBooks[i].name, addressBooks[i].phone);
    }
    PRINT_FORMAT4;
    printf("按任意键继续！");
    getchar();
    getchar();
}

/**
 * 新增通讯录联系人
 */
void addPerson() {
    int i, j;
    char s[50]; /*确定插入在哪个记录之前*/
    AddressBook personInfo;
    memset(&personInfo, 0, sizeof(personInfo));
    system("clear");/*清屏*/
    printf("请输入以下信息的值\n");
    PRINT_FORMAT2;
    PRINT_FORMAT1;
    scanf("%s", personInfo.name);
    scanf("%s", personInfo.phone);
    PRINT_FORMAT1;
    printf("请问您要在哪个联系人的信息前面插入，请输入该联系人的姓名:\n");
    scanf("%s", s); /*输入插入位置的姓名*/
    i = selectByName(s);
    if (i == -1) {
        addressBooks[countPerson] = personInfo;
    } else {
        for (j = countPerson - 1; j >= i; --j) {
            memcpy(&(addressBooks[j + 1]), &(addressBooks[j]), sizeof(AddressBook));
        }
        memcpy(&(addressBooks[i]), &(personInfo), sizeof(AddressBook));
    }
    countPerson++;
    printf("增加通讯录人员成功，按任意键继续！");
    getchar();
    getchar();
}

/**
 * 根据名称删除通讯录联系人
 */
void deletePersonByName() {
    int i, j;
    int ch = 0;
    char s[50]; /*确定插入在哪个记录之前*/
    system("clear");/*清屏*/
    printf("请输入要删除的联系人的姓名：\n"); /*提示信息*/
    scanf("%s", s);/*从键盘取得输入的姓名*/
    i = selectByName(s);
    if (i == -1) {
        printf("没找到要删除的联系人\n"); /*显示没找到要删除的记录*/
        printf("按任意键继续！");
        getchar();
        getchar();
    } else {
        printf("输入1确认删除，输入0不删除(1/0)。\n"); /*确认是否要删除*/
        scanf("%d", &ch); /*输入一个整数0或1*/
        if (ch == 1) {
            for (j = i + 1; j < countPerson; ++j) {
                memcpy(&(addressBooks[j - 1]), &(addressBooks[j]), sizeof(AddressBook));
            }
            countPerson--; //记录数减1
            printf("删除成功，按任意键继续！");
            getchar();
            getchar();
        }
    }
}

/**
 * 保存通讯录到文件中
 */
void saveFile() {
    int i;
    FILE *fp; /*指向文件的指针*/
    system("clear");/*清屏*/
    if ((fp = fopen(FILE_PATH, "wb")) == NULL) { /*打开文件，并判断打开是否正常*/
        printf("不能打开文件:%s\n",FILE_PATH);/*没打开*/
        exit(1); /*退出*/
    }
    printf("\n************开始保存文件************\n"); /*输出提示信息*/
    fprintf(fp, "%d", countPerson); /*将记录数写入文件*/
    fprintf(fp, "\r\n"); /*将换行符号写入文件*/
    for (i = 0; i < countPerson; ++i) {
        fprintf(stdout, "%-16s%-11s", addressBooks[i].name, addressBooks[i].phone);
        fprintf(stdout, "\r\n"); /*记录每行的一个回车换行符*/
        fprintf(fp, "%-16s%-11s", addressBooks[i].name, addressBooks[i].phone);
        fprintf(fp, "\r\n"); /*记录每行的一个回车换行符*/
    }
    fclose(fp); //关闭文件
    printf("****************保存成功***************\n"); /*显示保存成功*/
    printf("按任意键继续！");
    getchar();
    getchar();
}

/**
 * 加载文件中的数据到通讯录中
 */
void loadFile() {
    FILE *fp = NULL; /*指向文件的指针*/
    system("clear");/*清屏*/
    if ((fp = fopen(FILE_PATH, "rb")) == NULL) { /*打开文件，并判断打开是否正常*/
        printf("不能打开文件:%s\n",FILE_PATH);/*没打开*/
        exit(1); /*退出*/
    }
    fscanf(fp, "%d", &countPerson);
    printf("\n************开始读取文件************\n"); /*输出提示信息*/
    for (int i = 0; i < countPerson; ++i) {
        fscanf(fp, "%16s%11s\n", addressBooks[i].name, addressBooks[i].phone);
        fprintf(stdout,"%16s%11s\n", addressBooks[i].name, addressBooks[i].phone);
    }
    fclose(fp); //关闭文件
    printf("****************读取成功***************\n"); /*显示保存成功*/
    printf("按任意键继续！");
    getchar();
    getchar();
}