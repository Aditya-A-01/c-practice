#include <stdio.h>
int main(){
    int n = 0;
    int temp = 0;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:");
    for(int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < n-1; j++){
        for(int i = 0;i < n-j-1;i++){
            if(arr[i +1] > arr[i]){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i + 1]=temp; 
            }
        }
    }
    printf("Sorted: ");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}