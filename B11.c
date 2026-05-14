#include <stdio.h>
int main(){
    int arr[100];
    int flag = 0;
    int j = 0;
    for(int num = 3; num <= 100;num++){
        flag = 0;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                flag = 1;
            }
        }if(flag == 0){
            arr[j] = num;
            j++;
        }
        
    
    }
    for(int k = 0; k < j;k++){
        printf("\n%d\n", arr[k]);
    }
        
    
    



    return 0;
}