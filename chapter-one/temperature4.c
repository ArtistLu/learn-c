/*************************************************************************
	> File Name: temperature4.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 11:58:51
 ************************************************************************/

#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fhar;
    for (fhar = UPPER; fhar >= LOWER; fhar -= STEP) {
        printf("%3d\t%6.1f\n", fhar, (5.0 / 9.0) * (fhar - 32.0));    
    }

    return 0;
}
