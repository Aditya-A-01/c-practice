#include <stdio.h>
int main() {
    int x;
    printf("enter your  number: ");
    scanf("%d", &x);
    if(x > 10) {
        printf("Greater than 10: %d", x);
    }else{
        printf("less or equal to 10: %d", x);
    }
}