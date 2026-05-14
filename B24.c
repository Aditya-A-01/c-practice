#include <stdio.h>
int main() {
    int n = 0;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: ");
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int m = n-1; m>=0;m--){
        printf("%d ", arr[m]);
    }

    printf("\n");
    return 0;
}