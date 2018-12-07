/**
 * 实现以下功能:
 * 1.分别用函数和宏定义两种形式,从 3 个数中找出最大数。
 * 2.定义字符型,整型,浮点型和字符串输出格式的宏。
 */

#include <stdio.h>

#define MAX(a, b, c) ((a)>=(b)) ? ((a)>=(c) ? (a) : (c)) : ((b)>=(c) ? (b) : (c))
#define DD "%d"
#define DF "%f"
#define DC "%c"
#define DS "%s"

int max(int a, int b, int c);

int main(int argc, char *argv[]) {
    int x, y, z;
    printf("请输入三个整数：\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("max=%d\n", max(x, y, z));
    printf("max=%d\n", MAX(x, y, z));
    printf(DD, 12);
    printf("\n");
    printf(DF, 12.1);
    printf("\n");
    printf(DC, 'A');
    printf("\n");
    printf(DS, "嘿嘿");
    printf("\n");
    return 0;
}

int max(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}