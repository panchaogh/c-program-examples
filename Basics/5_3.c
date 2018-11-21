#include<stdio.h>
int main(void){
    int day,peach=1;/*最后一天桃子为1个*/
    for(day=9;day>=1;day--){/*从第九天循环至第一天*/
        peach=2*(peach+1);/*计算第day天的桃子*/
    }
    printf("第一天摘了%d个桃子.\n",peach);/*输出第一天的桃子数*/
    return 0;
}