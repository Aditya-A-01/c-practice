#include <stdio.h>
int main (){
    int a = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    int isprime = 1;

    for(int i = 2; i < a/2;i++){
        if(a % i == 0){
            isprime = 0;
            break;
        }
    }
    if (isprime == 1){
        printf("prime number %d\n", a);
    }else{
        printf("none prime number:%d\n", a);
    }

    return 0;
}