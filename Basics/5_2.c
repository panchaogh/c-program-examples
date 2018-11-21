#include<stdio.h>
/*打印斐波那契数列的前20项*/
int main(void){
    long f1,f2,i;
    f1=f2=1;/*前两项为1*/
    printf("斐波那契数列前20项有：\n");
    printf("%6ld %6ld ",f1,f2);/*输出f1和f2*/
    for(i=3;i<=20;i+=2){/*计算第三项到第20项*/
        f1 = f1+f2;/*计算下两项*/
        f2 = f1+f2;
        if(i%11==0)/*没输出10项，进行换行*/
            printf("\n");
        printf("%6ld %6ld ",f1,f2);/*输出f1和f2*/
    }
    printf("\n");
    return 0;
}