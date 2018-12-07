/**
 * 编写 C 程序,使用指针,实现以下功能:编一个函数 fun(char *s),函数的功能是
 * 把字符串中的内容逆置。
 */
#include <stdio.h>
#include <string.h>

extern char *fun(char *ps);

int main(int argc, char *argv[]) {
    char s[100];
    char *ps = s;
    fgets(ps, 100, stdin);
    puts(ps);
    puts(fun(ps));
    return 0;
}

char *fun(char *ps) {
    char t;
    int i, n;
    n = strlen(ps);
    for (i = 0; i < n / 2; ++i) {
        t = *(ps + i);
        *(ps + i) = *(ps + n - 1 - i);
        *(ps + n - 1 - i) = t;
    }
    return ps;
}