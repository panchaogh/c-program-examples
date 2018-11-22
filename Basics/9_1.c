#include <stdio.h>
#include <math.h>

int prime(int x);

int main(int argc, char *argv[]) {
    int num,isPrime;
    printf("请输入一个整数：\n");
    scanf("%d", &num);
    isPrime = prime(num);
    if (isPrime) {
        printf("%d是素数!",num);
    } else {
        printf("%d不是素数!",num);
    }
    return 0;
}

/**
 * 判断x是否是素数
 * @param x
 * @return
 */
int prime(int x) {
    int k,i;
    k = sqrt(x);
    for (i = 2; i <= k; ++i) {
        if (x % i == 0) {
            break;
        }
    }
    if (i > k) {
        return 1;//是素数
    } else {
        return 0;//不是素数
    }
}

