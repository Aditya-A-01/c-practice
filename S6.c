#include <stdio.h>

int main() {
    int a;
    int b; 
    printf("enter two number: ");

    scanf("%d %d", &a, &b);

    if(a > b ) {
        printf("A is bigger number: %d", a);
    }else if(a < b ) {
        printf("B is bigger number: %d", b);
    }else {
        printf("Both are equal: %d", a);
    }

    return 0;

}