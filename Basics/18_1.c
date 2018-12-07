//
// Created by panchao on 18-12-7.
//

#include <stdio.h>

/**
 * 选择排序法
 * @param a
 * @param n
 */
void select(int a[], int n);

/**
 * 插入排序法
 * @param a
 * @param n
 */
void insert(int a[], int n);

int main(int argc, char *argv[]) {
    int array1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int array2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("select前:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    select(array1, 10);
    printf("select后:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("insert前:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    insert(array2, 10);
    printf("insert后:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    return 0;
}

void select(int a[], int n) {
    int pos, temp;
    for (int i = 0; i < n - 1; ++i) {
        pos = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[pos]) {
                pos = j;
            }
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}

void insert(int a[], int n) {
    int temp, i, j;
    for (i = 1; i < n; ++i) {
        temp = a[i];
        for (j = i; j > 0 && a[j - 1] > temp; --j) {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }
}
