#include <stdio.h>
int main() {
    int a;
    int b;
    int c;

    printf("Enter three numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("A is bigger number: %d", a);
    }else if(b > a && b > c){
        printf("B is bigger number: %d", b);
    }else if(a == b && a > c){
        printf("Both A and B are biggest: %d", a, b);
    }else if(a == c && a > b){
        printf("Both A and C are biggest: %d", a, c);
    }else if(c == b && c > a){
        printf("Both C and B are biggest: %d", c, b);
    }else if(a == b && c == a){
        printf("All are equal: %d", a, b, c);
    }
    else{
        printf("C is bigger number: %d", c);
    }    

    return 0;

    

  
}