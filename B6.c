#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[5];
    printf("Enter 5 numbers:\n");
    
    

    for(int i = 0;i < 5;i++){
        scanf("%d", &arr[i]);
        
        
    }
    printf("You entered:\n");

    for(int i = 0; i < 5;i++){
        printf("%d ", arr[i]);
    }
    
    printf("\nWorking bby\n");
    return 0;
}