//
// Created by panchao on 18-11-22.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
    int *i[5];
    int j[5]={1,3,5,7,9};
    for (int k = 0; k < 5; ++k) {
        i[k] = &j[k];
    }
    for (int l = 0; l < 5; ++l) {
        printf("%d ",**(i+l));
    }
    printf("\n");
    for (int m = 0; m < 5; ++m) {
        printf("%d ",*i[m]);
    }
    printf("\n");
    return 0;
}
