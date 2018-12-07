#include <stdio.h>

/**
 * 编写 C 程序,实现以下功能:某个公司采用公用电话传递数据,数据是四位的
 * 整数,在传递过程中是加密的,加密规则如下:每位数字都加上 5,然后用和除以 10 的余数代替
 * 该数字,再将第一位和第四位交换,第二位和第三位交换。
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    int array[4] = {1, 2, 3, 4};
    int t;
    printf("原始数据：\n");
    for (int i = 0; i < 4; ++i) {
        printf("%5d ", array[i]);
    }
    printf("\n");
    printf("首次加密后的数据:\n");
    for (int i = 0; i < 4; ++i) {
        array[i] = (array[i] + 5) % 10;
        printf("%5d ", array[i]);
    }
    printf("\n");
    for (int i = 0; i < 2; i++) {
        t = array[i];
        array[i] = array[3 - i];
        array[3 - i] = t;
    }
    printf("再次加密后的数据:\n");
    for (int i = 0; i < 4; ++i) {
        printf("%5d ", array[i]);
    }
    printf("\n");
    return 0;
}