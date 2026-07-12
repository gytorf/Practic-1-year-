#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, r1, x2, y2, r2;
    double dx, dy, d;
    double sum, various;
    double eps = 1e-9;

    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    dx = x2 - x1;
    dy = y2 - y1;
    d = sqrt(dx * dx + dy * dy);

    sum = r1 + r2;
    various = fabs(r1 - r2);

    if (d < eps && fabs(r1 - r2) < eps)
    {
        printf("-1\n");
    }
    else if (fabs(d - sum) < eps || fabs(d - various) < eps)
    {
        printf("1\n");
    }
    else if (d < sum && d > various)
    {
        printf("2\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}