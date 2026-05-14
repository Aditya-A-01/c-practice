
#include<stdio.h>
int main() {
    int arr[5]={7,2,9,4,1};
    int temp=0;
    
for(int j =0; j<5;j++){
    for(int i = 0; i < 4;i++){
        if(arr[i] > arr[i+1]){
            
            temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;
        }

    }
}

    for(int i = 0; i < 5; i++){
            printf("%d\t", arr[i]);
    }

    printf("\n");
    

   0 return 0;
}