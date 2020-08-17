#include <stdio.h>
#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a > b) ? a : b)
typedef struct
{
    int x;
    int y;
} Point;

int onSegment(Point a, Point b, Point c)
{
    if (b.x >= min(a.x, c.x) && b.x <= max(a.x, c.x) && b.y >= min(a.y, c.y) && b.y <= max(a.y, c.y))
        return 1;
    return 0;
}

int orientation(Point a, Point b, Point c)
{
    int val = (b.y - a.y) * (c.x - b.x) - (c.y - b.y) * (b.x - a.x);
    if (val == 0)
        return 0;
    return (val > 0) ? 1 : 2;
}

int isIntersect(Point p1, Point q1, Point p2, Point q2)
{
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
    if (o1 != o2 && o3 != o4)
        return 1;

    if (!o1 && onSegment(p1, p2, q1))
        return 1;
    if (!o2 && onSegment(p1, q2, q1))
        return 1;
    if (!o3 && onSegment(p2, p1, q2))
        return 1;
    if (!o4 && onSegment(p2, q1, q2))
        return 1;

    return 0;
}

int main()
{
    int t, x1, x2, x3, x4, y1, y2, y3, y4;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

        Point p1 = {x1, y1};
        Point p2 = {x2, y2};
        Point p3 = {x3, y3};
        Point p4 = {x4, y4};

        if (isIntersect(p1, p2, p3, p4))
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}