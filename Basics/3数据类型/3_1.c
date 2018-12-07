#include<stdio.h>

/**
 * 编写 C 程序,实现以下功能:有一个字符‘K’:
 * (1) 以十进制,八进制和十六进制输出对应整数;
 * (2) 利用变换的整数,以转义符形式再输出字符‘K’。
 * @return
 */
int main(void) {
    char c = 'K';
    int num1 = 0113;
    int num2 = 0x4b;
    printf("%d %o %x\n", c, c, c);
    printf("%d,%d\n", num1, num2);
    return 0;
}