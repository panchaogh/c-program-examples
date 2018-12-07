#include<stdio.h>

/**
 * 输出斐波那契(Fibonacci)数列的前 20 项。该数列的第 1 项和第 2 项为 1,从第 3 项开始,每一项均为其前面 2 项之各和,即:1,1,2,3,5,8,......。
 * @return
 */
int main(void) {
    long f1, f2, i;
    f1 = f2 = 1;/*前两项为1*/
    printf("斐波那契数列前20项有：\n");
    printf("%6ld %6ld ", f1, f2);/*输出f1和f2*/
    for (i = 3; i <= 20; i += 2) {/*计算第三项到第20项*/
        f1 = f1 + f2;/*计算下两项*/
        f2 = f1 + f2;
        if (i % 11 == 0)/*没输出10项，进行换行*/
            printf("\n");
        printf("%6ld %6ld ", f1, f2);/*输出f1和f2*/
    }
    printf("\n");
    return 0;
}