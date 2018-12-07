/**
 * 编写 C 程序,将十六进制数转换成二进制。
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned short a, b; /*声明无符号短整型*/
    printf("请输入一个整数：");
    scanf("%x=", &a); /*输入无符号整型*/
    b = 1 << 15; /*构造一个最高位为 1、其余各位为0的整数*/
    printf("%x=", a);
    for (int j = 1; j <= 16; ++j) {
        putchar(a & b ? '1' : '0'); /*输出最高位的值（1/0）*/
        a <<= 1; /*将次高位移到最高位上*/
        if (j % 4 == 0) {
            putchar(','); /*四位一组用逗号分开*/
        }
    }
    printf("\bB\n");
    return 0;
}