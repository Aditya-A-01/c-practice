#include <stdio.h>
int main(){
    int arr[5] = {3 , 1, 6, 2, 5};
    int largest = arr[0];
    
    for(int i = 0 ; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("\nlargest number: %d\n", largest);


    return 0;
}