/**
 * 编写 C 程序,使用指针,实现以下功能:输入三个整数,按照从大到小顺序输
 * 出,使用指针变量进行交换
 */
#include <stdio.h>

extern void swap(int *x, int *y);

int main(int argc, char *argv[]) {
    int a, b, c;
    int *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;
    scanf("%d %d %d", pa, pb, pc);
    printf("排序前：%d %d %d\n", *pa, *pb, *pc);
    if (*pa > *pb) {
        swap(pa, pb);
    }
    if (*pa > *pc) {
        swap(pa, pc);
    }
    if (*pb > *pc) {
        swap(pb, pc);
    }
    printf("排序后：%d %d %d\n", *pa, *pb, *pc);
    return 0;
}

/**
 *
 * @param x
 * @param y
 */
void swap(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

