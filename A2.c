#include <stdio.h>
int main() {
    double x;
    printf("Enter minutes: ");
    scanf("%lf", &x);

    printf("minutes in days : %.10lf\n", x / 1440);
    printf("minutes in years: %.10lf\n", x / 525600);
    return 0;
}