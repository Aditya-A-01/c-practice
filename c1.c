#include <stdio.h>
int main(){
    int arr[3]= {2, 4, 6};
    for(int i = 0; i < 3;i++){
        arr[i] = arr[i] * 2;
    }
    for(int i = 0; i < 3; i++){
        printf("%d\n", arr[i]);
    }


    return 0;
}