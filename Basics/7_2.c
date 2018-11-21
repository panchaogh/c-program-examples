#include <stdio.h>

int main(int argc, char *argv[]) {
    int array[4] = {1, 2, 3, 4};
    int t;
    printf("原始数据：\n");
    for (int i = 0; i < 4; ++i) {
        printf("%5d ",array[i]);
    }
    printf("\n");
    printf("首次加密后的数据:\n");
    for (int i = 0; i < 4; ++i) {
        array[i] = (array[i] + 5) % 10;
        printf("%5d ",array[i]);
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        t=array[i];
        array[i]=array[3-i];
        array[3-i]=t;
    }
    printf("再次加密后的数据:\n");
    for (int i = 0; i < 4; ++i) {
        printf("%5d ",array[i]);
    }
    printf("\n");
    return 0;
}