/*************************************************************************
	> File Name: temperature3.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 11:28:13
 ************************************************************************/

#include<stdio.h>

int main()
{
    int fhar;

    for (fhar = 300; fhar >= 0; fhar -= 20)
        printf("%3d\t%6.1f\n", fhar, (5.0 / 9.0) * (fhar - 32.0));
}
