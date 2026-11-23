
#include <stdio.h>
#include <math.h>

void to_polar(double x, double y, double *r, double *theta)
{
    double angle;

    *r = hypot(x, y);

    angle = atan2(y, x);
    *theta = angle * (180.0 / M_PI);
}

int main(void)
{
    double x;
    double y;
    double radius;
    double angle_degree;

    scanf("%lf %lf", &x, &y);

    to_polar(x, y, &radius, &angle_degree);

    printf("%.3f,%.2f", radius, angle_degree);

    return 0;
}
