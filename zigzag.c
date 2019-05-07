#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * convert(char * s, int numRows);

int main()
{
    printf("%s\n", convert("PAYPALISHIRING", 2));

    return 0;
}

char * convert(char * s, int numRows)
{
    if (numRows == 1)
    {
        return s;
    }

    int len, i, pp;
    char* p;

    len = strlen(s);
    p = (char*)malloc(sizeof(char) * len + 1);
    pp = 0;

    //循环参数numRows次
    for (i = 1; i <= numRows; i++)
    {
        int j, k, flag;

        flag = 1;
        k = 0;
        //循环参数s字符串
        for (j = 1; j <= len; j++)
        {
             k += flag;
            if (k == numRows || (k == 1 && j != 1))
            {
                flag = -flag;
            }

            if (k == i)
            {
                p[pp++] = s[j - 1];
            }

        }

    }

    p[pp] = '\0';
    return p;
}