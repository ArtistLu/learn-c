#include <stdio.h>
#include "grep.h"

int main()
{
    char line[MAXLEN];
    char pattern[] = "ould";
    int count;

    count = 0;
    while(getaline(line, MAXLEN) > 0)
    {
        if (strindex(line, pattern) >= 0)
        {
            printf("%s\n", line);
            count++;
        }
    }
    return count;
}
