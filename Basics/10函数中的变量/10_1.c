/**
 * 编写一个函数,使输入的字符串反序存放,并在主函数中输入和输出字符串。要
 * 求该函数与主函数不在同一个文件中。
 */
#include <stdio.h>

#define N 50

extern void reverse(char str[]);

int main() {
    char str[N];
    printf("请输入一个字符串：");
    scanf("%s", str);
    reverse(str);
    printf("倒序后的字符串为：%s\n", str);
}