#include <stdio.h>
int main() {
    int n;
    int isAscending = 1;
    int isDscending = 1;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: ");
    for(int i =0;i<n;i++){
    scanf("%d", &arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(isAscending==0 && isDscending==0){
            break;
        }
        if(arr[i]>arr[i+1]){
            isAscending = 0;
        }
        if(arr[i+1]>arr[i]){
            isDscending = 0;
        }
    }
    if(isAscending == 1){
        printf("Sorted: ");
    }
    if(isDscending == 1){
        printf("sorted: ");
    }else{
        printf("Unsorted: ");
    }
    for(int i = 0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}