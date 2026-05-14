#include <stdio.h>
int main(){
    int a;

    
    printf("Enter number between 1 to 3: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Hi\n");
            break;
        case 3:
            printf("bye\n");
            break;

        default:
        printf("ERROR\n");

    } 

    return 0;
}