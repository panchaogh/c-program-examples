//
// Created by panchao on 18-11-27.
//
#include <string.h>
/**
 * 字符串反序
 * @param str
 */
void reverse(char str[]) {
    int n;//字符串长度
    char temp;
    n = strlen(str);
    for (int i = 0; i < n / 2; ++i) {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}