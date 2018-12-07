/**
 * 编写一个简单的留言程序,每次打开 ../resources/13_1.txt 文件并显示所有内容,然后允许
 * 用户写新留言,并保存到 ../resources/13_1.txt 文件中。
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch, c;
    /*以读取追加方式打开文件，并判断其返回值*/
    if ((fp = fopen("../resources/13_1.txt", "a+")) == NULL) {
        fprintf(stderr, "错误号：%d\n", errno);
        perror("输出错误");
        fprintf(stderr, "打开文件错误：%s\n", strerror(errno));
        exit(0);
    }
    /*提示信息*/
    printf("是否查看留言？（Y/N）\n");
    ch = getchar();
    getchar();     /*读回车符*/
    if (ch == 'Y' || ch == 'y') {
        while ((c = fgetc(fp)) != EOF) {
            putchar(c);
        }
        printf("\n");
    }
    /*提示信息*/
    printf("是否添加新留言？（Y/N）\n");
    ch = getchar();
    if (ch == 'Y' || ch == 'y') {
        fputc(getchar(), fp);/*读回车符*/
        while ((c = getchar()) != '\n') {
            fputc(c, fp);
        }
    }
    fclose(fp);
    return 0;
}

