#include <stdio.h>
int main() {
    int n= 0 ;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the number: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i] == arr[j]){
                n--;
                for(int m = j;m<n;m++){
                    arr[m]=arr[m+1];
                }
                j--;
            }
        }
    }
    printf("sorted:");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}