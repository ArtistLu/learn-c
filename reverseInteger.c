#include <stdio.h>
#include <math.h>

int reverse(int x);

int main()
{
    printf("%f\n",  pow(2, 31));

    // int x;
    // scanf("%d", &x);
    // printf("%d\n", reverse(x));
    // return 0;
}

int reverse(int x)
{
    long r;
    int l;
    l = pow(2, 31);
    
    if (x >= l - 1 || x <= -l)
        return 0;
    
    r = 0;
    do {
        r = r * 10 + (x % 10);
        if (r >= l - 1 || r <= -l)
            return 0;
    } while (x /= 10);

    return r;
}
