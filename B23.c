#include <stdio.h>
int main(){
    int n=0;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: ");
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i] != arr[i+1]){
            printf("%d", arr[i]);
        }
    }
    printf("%d", arr[n-1]);
    printf("\n");



    return 0;
}