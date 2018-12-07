#include <stdio.h>

/**
 * 编写 C 程序,实现以下功能:有一个 3*3 的数组,求数组中最大值、最小值、
 * 总和和平均值,并输出最大值和最小值所在的位置。
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    int array[3][3];
    int sum, max, min, maxLine, maxColumn, minLine, minColumn;
    int i, j;
    printf("请输入3*3元素：\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%d", &array[i][j]);
        }
    }
    sum = 0;
    max = array[0][0];
    min = array[0][0];
    maxLine = 0;
    maxColumn = 0;
    minLine = 0;
    minColumn = 0;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%5d", array[i][j]);
            sum += array[i][j];
            if (max < array[i][j]) {
                max = array[i][j];
                maxLine = i + 1;
                maxColumn = j + 1;
            }
            if (min > array[i][j]) {
                min = array[i][j];
                minLine = i + 1;
                minColumn = j + 1;
            }
        }
        printf("\n");
    }
    printf("sum=%d,avg=%d\n", sum, sum / 9);
    printf("max=%d,maxLine=%d,maxColumn=%d\n", max, maxLine, maxColumn);
    printf("min=%d,minLine=%d,minColumn=%d\n", min, minLine, minColumn);
    return 0;
}