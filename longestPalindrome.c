#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s);

int main()
{
    char line[] = "bbbb";
    printf("%s\n", longestPalindrome(line));
    return 0;
}

char* longestPalindrome(char* s)
{
    int len, gap, max, l, r, i, j, k, ii;
    int index[2];
    len = strlen(s);
    max = 0;
    ii = 0;

    //字符串为空或只有一个字符
    if (len <= 1)
    {
        return s;
    }

    //分配最大情况内存空间
    char* p = (char*)malloc(sizeof(char) * len +1);

    for (i = 0; i < len; i++)
    {
        //回文字符串长度为偶数
        k = i + 1;
        if (k < len && s[i] == s[k])
        {
            l = i;
            r = k;
            while (l > 0 && r < len - 1 && s[l - 1] == s[r + 1])
            {
                l--;
                r++;
            }

            gap = r - l + 1;
            if (gap >= max) {
                index[0] = l;
                index[1] = r;
                max = gap;
            }
        }

        //回文字符串长度为奇数
        j = i + 2;
        if (j < len && s[i] == s[j])
        {
            l = i;
            r = j;
            while (l > 0 && r < len - 1 && s[l - 1] == s[r + 1])
            {
                l--;
                r++;
            }

            gap = r - l + 1;
            if (gap >= max) {
                index[0] = l;
                index[1] = r;
                max = gap;
            }
        }
    }

    if (max == 0)
    {
        p[0] = s[len - 1];
        p[1] = '\0'; 
    }
    else
    {
        l = index[0];

        while(l <= index[1])
        {
            p[ii++] = s[l++];
        }
        p[ii] = '\0';
    }

    return p;
}
