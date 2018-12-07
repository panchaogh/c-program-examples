//
// Created by panchao on 18-11-27.
//
#include <stdio.h>

/**
 * 计算1-1/2+1/3-1/4+...+1/m的值
 * @param m
 * @return
 */
float sum(int m);

/**
 * 计算1-1/2+1/3-1/4+...+1/m的值
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    int m;
    float result;
    printf("请输入m的值(正整数)：");
    scanf("%d", &m);
    result = sum(m);
    printf("1-1/2+1/3-1/4+...+1/%d=%f\n", m, result);
    return 0;
}

/**
 * 计算1-1/2+1/3-1/4+...+1/m的值
 * @param m
 * @return
 */
float sum(int m) {
    float t = 1, result = 1.0;
    for (int i = 2; i <= m; ++i) {
        t = (-1) * t;
        result += t * 1.0 / i;
    }
    return result;
}