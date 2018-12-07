//
// Created by panchao on 18-12-7.
//

#include <stdlib.h> //包含标准输入输出头文件*
#include <time.h> //包含日期时间处理头文件
#include <stdio.h> //包含转换和存储头文件

#define MAX 26
#define START 2

int sort_intfun(const void *a, const void *b);

int main(int argc, char *argv[]) {
    int i;
    int array[20];
    /*随机数播种函数*/
    srand((unsigned) time(NULL));
    for (int j = 0; j < 20; ++j) {
        array[i] = rand() % START;
    }
    for (int k = 0; k < 20; ++k) {
        if (array[k] == 0) {
            array[k] = 65 + rand() % MAX;
        } else {
            array[k] = 97 + rand() % MAX;
        }
    }
    for (int l = 0; l < 20; ++l) {
        printf("%c", array[l]);
    }
    printf("\n");
    qsort((void *) array, 20, sizeof(array[0]), sort_intfun);
    for (i = 0; i < 20; i++)
        printf("%c ", array[i]);
    printf("\n");
    return 0;
}

int sort_intfun(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

