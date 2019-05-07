#include <stdio.h>
#define BUFSIZE 100
int bufp = 0;
char buf[BUFSIZE];

int getch(void)
{
    return bufp > 0 ? buf[--bufp] : getchar();
}

void ungetch(char c)
{
    if (bufp < BUFSIZE)
        buf[bufp++] = c;
    else
        printf("error: buff full can't ungetch %c\n", c);
}