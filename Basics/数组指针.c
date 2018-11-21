#include <stdio.h>

/**
 * 数组指针的应用(指向数组的指针)
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    int (*p1)[2], j[2][2] = {{1, 3},
                             {5, 7}};
    p1 = j;
    for (int k = 0; k < 2; ++k) {
        for (int l = 0; l < 2; ++l) {
            printf("%d\n", (*(p1 + k))[l]);
        }
    }
    return 0;
}