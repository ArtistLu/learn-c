/*************************************************************************
	> File Name: io.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 12:13:22
 ************************************************************************/

#include<stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
