#include <stdio.h>
int main() {
    int even = 0;
    int odd = 0;
    int arr[6]={1, 2, 3, 4, 5, 6};
    int index = 0;
    
    for(int i = 0;i < 6;i++){
        if(arr[i] % 2 == 0){
            even++;

        }else if(arr[i] % 2 == 1){
            odd++;
        }
    }
    printf("even: %d\n", even);
    printf("odd : %d\n", odd);



    return 0;
}