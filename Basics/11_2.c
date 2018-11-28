//
// Created by panchao on 18-11-28.
//
#include <stdio.h>

#define DEBUG
#ifdef DEBUG
#define N 3
#else
#define N 1
#endif

extern void getMaxAndMin(int array[], int arraySize, int *max, int *min);

int main(int argc, char *argv[]) {
    int da, xiao;
    int *max, *min;
    max = &da;
    min = &xiao;
    int array[N];
    int arraySize = N;
    printf("请输入%d个元素：\n", arraySize);
    for (int i = 0; i < arraySize; ++i) {
        scanf("%d", &array[i]);
    }
    getMaxAndMin(array, arraySize, max, min);
    printf("最大值为：%d,最小值为：%d\n", *max, *min);
    return 0;
}

/**
 * 求最大值和最小值
 */
void getMaxAndMin(int array[], int arraySize, int *max, int *min) {
    *max = array[0];
    *min = array[0];
    for (int i = 0; i < arraySize; ++i) {
        if (*max < array[i]) {
            *max = array[i];
        }
        if (*min > array[i]) {
            *min = array[i];
        }
    }
}