#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point addpoint(struct point p1, struct point p2);

int main()
{
    struct point p1, p2, p3;
    p1.x = 1;
    p1.y = 2;
    p2.x = 1;
    p2.y = 2;

    p3 = addpoint(p1, p2);

    printf("%d\t%d\n", p1.x, p1.y);
    printf("%d\t%d\n", p2.x, p2.y);
    printf("%d\t%d\n", p3.x, p3.y);

    return 0;
}

struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;

    return p1;
}