#include <stdio.h>
int main(){
    int even = 0;
    int arr[5];
    int odd = 0;
    printf("Enter your number: ");
    for(int i = 0;i < 5;i++){
        scanf("%d", &arr[i]);
    }

    printf("Even:");
    for(int i = 0; i < 5;i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd:");
    for(int i = 0;i < 5;i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}