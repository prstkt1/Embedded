#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
    double alpha;

    printf("значення alpha: ");
    scanf("%lf", &alpha);

    double z1 = cos(alpha) + sin(alpha) + cos(3.0 * alpha) + sin(3.0 * alpha);
    double z2 = 2.0 * sqrt(2.0) * cos(alpha) * sin(M_PI / 4.0 + 2.0 * alpha);

    printf("z1 = %.4f\n", z1);
    printf("z2 = %.4f\n", z2);

    return 0;
}