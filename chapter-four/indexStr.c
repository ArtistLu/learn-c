#include <stdio.h>
#include <string.h>

int indexstr(char source[], char search[]);

int main()
{
    printf("%d\n", indexstr("01234565656", "5655"));
    return 0;
}

//返回字符串中最右子串下标，没有返回 -1
int indexstr(char source[], char search[])
{
    int i, j, k, l;
    i = strlen(source) - 1;
    j = strlen(search) - 1;

    for (; i >= 0; i--)
    {
        k = i;
        l = j;
        while (source[k] == search[l])
        {
            k--;
            l--;
        }
            ;
        if (l == -1)
        {
            return k + 1;
        }
    }

    return -1;
}