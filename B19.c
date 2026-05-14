#include <stdio.h> 
int main(){
    int n=0;
    int temp = 0;
    int pass=0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the numbers: ");
    for(int m = 0; m < n;m++){
        scanf("%d", &arr[m]);
    }



    for(int j = 0; j < n-1;j++){
        for(int i = 0; i < n -j- 1;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                pass++;
            }
        }
    }
    printf("sorted:");
    for(int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n %d", pass);
    printf("\n");


    return 0;
}