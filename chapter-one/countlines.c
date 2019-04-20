/*************************************************************************
	> File Name: countlines.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 12:37:51
 ************************************************************************/

#include<stdio.h>

int main()
{
    int c, nc;
    nc = 0;
    while((c = getchar()) != EOF)
        if (c == '\n') 
            nc++;
    printf("%d\n", nc);
}
