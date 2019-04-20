/*************************************************************************
	> File Name: wc.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 12:55:48
 ************************************************************************/

#include<stdio.h>
#define IN 1
#define OUT 0 

int main()
{
    int c, nc, nl, nw, stat;
    nc = nl = nw = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n')
            nl++;
        if (c == ' ' || c == '\n' || c == '\t')
            stat = OUT;
        else if (stat == OUT) {
            stat = IN;
            nw++;
        }
    }
    printf("%d\t%d\t%d\n", nc, nl, nw);
    return 0;
}
