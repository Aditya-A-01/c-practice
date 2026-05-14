#include <stdio.h>
int main(){
    int n = 0;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the numbers: ");
    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for(int i = 0; i < n;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    printf("Largest:%d\n", largest);
    int secondlargest = arr[0];

    for(int i = 0;i < n;i++){
        if(arr[i] >  secondlargest && largest != arr[i]){
            secondlargest = arr[i];
        }
    }
    printf("Secondlargest:%d\n", secondlargest);


    return 0;
}