#include <stdio.h>
int main(){
    float a;
    char operator;
    float b;

    printf("\nHey i am ruby your mini calculater\n");

    printf("\nEnter number1 operator number2 respectively: ");
    scanf("%f %c %f", &a, &operator, &b);

    switch(operator){
        case '+':
        printf("\nsum: %.2f\n", a + b);
        break;

        case '-':
        printf("\nsub: %.2f\n", a - b);
        break;

        case '*':
        printf("\nmultiplication: %.2f\n", (a * b));
        break;

        case '/':
        printf("\ndivision:%.2f\n", a / b);
        break;

        default:
        printf("\nERROR!\n");

        
    } printf("\nThanks for using me\nI'll be waiting for your next question\n");
    return 0;
}