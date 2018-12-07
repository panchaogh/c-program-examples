#include <stdio.h>
#include <string.h>
extern char *fun(char *ps);
int main(int argc, char *argv[]) {
    char s[100];
    char *ps = s;
    fgets(ps,100,stdin);
    puts(ps);
    puts(fun(ps));
    return 0;
}

char *fun(char *ps){
    char t;
    int i,n;
    n = strlen(ps);
    for (i = 0; i < n/2; ++i) {
        t = *(ps + i);
        *(ps + i) = *(ps + n - 1 - i);
        *(ps + n - 1 - i) = t;
    }
    return ps;
}