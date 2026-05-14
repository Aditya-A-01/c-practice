#include <stdio.h>
int main() {
    int arr[5] = {4, 9, 2, 10, 3};
    int smallest = arr[0];
    int largest = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("largest : %d\n", largest);
    printf("smallest :%d\n", smallest);

    return 0;
}