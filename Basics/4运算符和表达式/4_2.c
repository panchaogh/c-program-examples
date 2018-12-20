/**
 * 求两个整数之积
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y, multiply;
    printf("请输入两个整数：");
    scanf("%d %d", &x, &y);
    multiply = x * y;
    printf("%d * %d = %d\n", x, y, multiply);
    return 0;
}
