#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    double dx, dy;
    double dov;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    dov = sqrt(dx * dx + dy * dy);

    printf("%.6f\n", dov);

    return 0;
}