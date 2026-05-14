#include <stdio.h>
int main(){
    int arr[5];
    printf("\nEnter 5 numbers\n");
    scanf("%d", &arr[0]);
    int smallest = arr[0];

    for(int i = 1; i < 5 ; i++){
        scanf("%d", &arr[i]);

            if(arr[i] < smallest){
                smallest = arr[i];
            }
    }
    printf("\nSmallest number: %d", smallest);

    return 0;

}