/*************************************************************************
	> File Name: funcition.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 14:21:58
 ************************************************************************/

#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float switchTemperature(int f);

int main()
{
    int fhar;
    for (fhar = LOWER; fhar <= UPPER; fhar += STEP)
        printf("%3d\t%6.1f\n", fhar, switchTemperature(fhar));
    return 0;
}

float switchTemperature(int fhar)
{
    return (5.0 / 9.0) * (fhar - 32.0);
}

