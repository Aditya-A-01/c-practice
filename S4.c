#include <stdio.h>

int main() {
    float num1;
    float num2;

    scanf("%f %f", &num1, &num2);
    printf("\nsum: %.2f", num1 + num2);
    printf("\ndifference: %.2f", num1 - num2);
    printf("\nMultiplication: %.2f", num1 * num2);
    printf("\nDivison: %.2f\n", num1 / num2);

    return 0;


}