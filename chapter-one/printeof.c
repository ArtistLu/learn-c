/*************************************************************************
	> File Name: printeof.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 12:15:51
 ************************************************************************/

#include<stdio.h>

int main()
{
    printf("%d\t%d\n", EOF, getchar() != EOF);
    while (getchar() != EOF) {
        printf("%d\n", getchar() != EOF);
    }
    printf("%d\n", getchar() != EOF);

}
