/*************************************************************************
	> File Name: countchar1.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 12:32:01
 ************************************************************************/

#include<stdio.h>

int main()
{
    long nc;
    for (nc = 0; getchar() != EOF; nc++)
        ;
    printf("%ld\n", nc);
}
