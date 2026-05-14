#include <stdio.h>
int main() {
    int x;
    
    printf("Enter your number: ");
    scanf("%d", &x);
    if(x % 2 == 0) {
        printf("Even number: %d\n", x);
    }else {
        printf("Odd number: %d\n", x);
    }  if (x > 0){
        printf("Postive number: %d\n", x);
    }else {
        printf("negative number: %d\n", x);
    }

    return 0;
}