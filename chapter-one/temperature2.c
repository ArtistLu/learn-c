/*************************************************************************
	> File Name: temperature.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 11:07:08
 ************************************************************************/

#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
   fahr = lower;
    while (fahr <= upper) {
        celsius = 5.0 / 9.0  * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
