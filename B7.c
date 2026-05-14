#include <stdio.h>
int main(){
    int arr[5];
    int sum = 0;
    float avg = 0.0;
    
    printf("\nEnter 5 numbers:\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
   
    avg = sum / 5.0;

    
    printf("\nsum = %d", sum);
    printf("\navg = %.2f\n", avg);
    


    return 0;
}