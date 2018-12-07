//
// Created by panchao on 18-11-27.
//

/**
 * 利用递归法求反序的输出
 * @param x
 */
#include <stdio.h>

/**
 * 用递归法反序输出一个正整数的各位数值,如输入 4532,应输出 2354。
 * @param x 
 */
void reverse(int x);

int main(int argc, char *argv[]) {
    int num;
    printf("请输入一个整数（不大于五位数）：");
    scanf("%d", &num);
    if (num > 99999) {
        printf("%d超过五位数！\n", num);
        return 1;
    }
    printf("%d反序输出的结果为：", num);
    reverse(num);
    printf("\n");
    return 0;
}

void reverse(int x) {
    int num;
    printf("%d", x % 10);
    num = x / 10;
    if (num) {
        reverse(num);
    }
}