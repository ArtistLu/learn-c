#include <stdio.h>
#include "calc.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAXLEN 20

int main()
{
    int type;
    double op2;
    char s[MAXLEN];

    while((type = getop(s)) != EOF)
    {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknow commands %s\n", s);
            break;
        }

        return 0;
    }
}