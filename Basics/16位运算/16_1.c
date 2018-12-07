/**
 * 编写 C 程序,将无符号数 a 左循环移 n 位,即将 a 中原来左面 n 位左移 n 位,
 * 位移到最右面 n 位。
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned short a, b, c; /*声明字符型变量*/
    int n;
    scanf("%o %d", &a, &n); /*输入八进制和十进制数*/
    b = a >> (16 - n);    /*右移运算*/
    c = a << n; /*左移运算*/
    c = c | b; /*按位或*/
    printf("%o %o\n", a, c); /*输出八进制数*/
    return 0;
}