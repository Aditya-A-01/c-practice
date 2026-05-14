#include <stdio.h>

int main() {
    float num1;
    
    scanf("%f", &num1);

    if (num1 > 0.0) {

        printf("postitive number");
    } 
    else if ( num1 < 0.0) {
        printf("Negative number");
    } 
    else {
        printf("zero");
    }
}