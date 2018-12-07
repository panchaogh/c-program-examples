#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[]={"ABCEJFAHADBDEBBFQPMDNBB"};
    char *p=a;
    char *t=p;
    int total=0;
    while(*p!='\0')  	/*数组没有到结束就循环*/
    {
        p++;  	/*指针后移*/
        if(*p=='B')  	/*当指针指向的值是#*/
        {
            total++;
            t=p;  /*t指向数组*/
            while(*t!='\0')  	/*数组没有到结束就循环*/
            {
                *t=*(t+1);  	/*数组前移一位*/
                t++;  	/*指针后移*/
            }
            p--;	/*指针前移，重新检查该位置值*/
        }
    }
    printf("%d\n",total);
    puts(a);
}