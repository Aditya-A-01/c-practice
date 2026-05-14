#include <stdio.h>
int main(){
    int password;
    printf("Enter the password: ");

    scanf("%d", &password);
    while(password != 1234){
        printf("WRONG try again: ");
        scanf("%d", &password);
    }printf("correct\n");        

    return 0;
}