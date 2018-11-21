#include<stdio.h>
int main(void){
    int n,i,k;
    /*从1至1000循环依次找到完数*/
    for(n=1;n<=1000;n++){
        /*累加器初始值为0*/
        k = 0;
        /*循环找到能与n整数的数*/
        for(i=1;i<=n/2;i++){
            if(n%i==0){
                /*将其因数做累加*/
                k += i;
            }
        }
        /*如果n等于其各因数之和，列出其各个因数*/
        if(n==k){
            printf("%4d是一个完数，它的因数有：",n);
            for(i=1;i<=n/2;i++){
                if(n%i==0){
                    printf("%d,",i);
                }
            }
            printf("\b \n");
        }
    }
    return 0;
}