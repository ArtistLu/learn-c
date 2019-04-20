/*************************************************************************
	> File Name: countchar.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 12:29:43
 ************************************************************************/

#include<stdio.h>

int main()
{
    long nc;
    nc = 0;
    while(getchar() != EOF) {
        nc++;
    }
    printf("%ld\n", nc);
}
