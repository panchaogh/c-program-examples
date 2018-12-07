//
// Created by panchao on 18-12-7.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned short a,b,c; /*声明字符型变量*/
    int n;
    scanf("%o %d", &a, &n); /*输入八进制和十进制数*/
    b = a >> (16 - n);	/*右移运算*/
    c = a << n; /*左移运算*/
    c = c | b; /*按位或*/
    printf("%o %o\n", a, c); /*输出八进制数*/
    return 0;
}