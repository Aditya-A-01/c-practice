#include <stdio.h>

int main() {
    int x;
    printf("Enter your marks: ");
    scanf("%d", &x);
    if(x >= 35) {
        printf("PASS: %d\n", x);
    } else {
        printf("FAIL: %d\n", x);
    }
    return 0;
}