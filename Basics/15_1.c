//
// Created by panchao on 18-12-7.
//

#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char *s1 = "asd";
    char *s2 = "bsasdfhgasddfsdgfasdg";
    char *s3;
    int n = 0;
    puts(s2);
    s3 = strstr(s2, s1);
    while (s3) {
        n++;
        printf("第%d次，位置%d\n", n, s3-s2+1);
        s3 += strlen(s1);
        s3 = strstr(s3, s1);
    }
    return 0;
}