#include <stdio.h>

#define N 50

extern void reverse(char str[]);

/**
 * 字符串反序主函数
 * @return
 */
int main() {
    char str[N];
    printf("请输入一个字符串：");
    scanf("%s", str);
    reverse(str);
    printf("倒序后的字符串为：%s\n", str);
}