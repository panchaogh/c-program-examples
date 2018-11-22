#include <stdio.h>

long factorial(int x);

int main(int argc, char *argv[]) {
    long result;
    int m, n;
    printf("请输入m,n的值(n的值大于m)：");
    /*根据提示由用户输入m,n的值*/
    scanf("%d%d", &m, &n);
    /*三次调用fac函数来求(n!)/(m!*(n-m)!)*/
    result = factorial(n) * 1.0 / (factorial(m) * factorial(n - m));
    printf("结果为：%ld\n", result);
}

/**
 * 求x的阶乘
 * @param x
 * @return
 */
long factorial(int x) {
    long factorial = 1;
    for (int i = x; i > 0; --i) {
        factorial *= i;
    }
    return factorial;
}