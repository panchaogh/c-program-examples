/**
 * 编写 C 程序,使用指针,实现以下功能:
 * (1) 统计“ABCEJFAHADBDEBBFQPMDNBB”字符串中字母 B 的个数;
 * (2) 移除所有字符“B”,后面所跟的字符串;
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[] = {"ABCEJFAHADBDEBBFQPMDNBB"};
    char *p = a;
    char *t = p;
    int total = 0;
    while (*p != '\0')    /*数组没有到结束就循环*/
    {
        p++;    /*指针后移*/
        if (*p == 'B')    /*当指针指向的值是#*/
        {
            total++;
            t = p;  /*t指向数组*/
            while (*t != '\0')    /*数组没有到结束就循环*/
            {
                *t = *(t + 1);    /*数组前移一位*/
                t++;    /*指针后移*/
            }
            p--;    /*指针前移，重新检查该位置值*/
        }
    }
    printf("%d\n", total);
    puts(a);
}