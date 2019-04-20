/*************************************************************************
	> File Name: printLongest.c
	> Author: Bill
	> Mail: XXXXXXX@qq.com 
	> Created Time: 2019-04-20 14:55:57
 ************************************************************************/

#include<stdio.h>
#define MAXLEN 1000

int getaline(char s[], int maxlen);
void copy(char to[], char from[]);

int main()
{
    char line[MAXLEN];
    char longest[MAXLEN];
    int max, i;
    
    max = 0;
    while ((i = getaline(line, MAXLEN)) > 0) {
        if (i > max) {
            max = i;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s\n", longest);
    return 0;
}

int getaline(char s[], int maxlen)
{
    int c, i;
    for (i = 0; i < maxlen - 1 && (c = getchar()) != '\n' && c != EOF; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
    return;
}
