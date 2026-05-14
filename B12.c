#include <stdio.h>
int main(){
   int arr[100];
   int isprime;
   int index = 0;
   for(int i = 3; i <= 100;i++){
       isprime = 1;
       for(int j = 2; j < i; j++){
        if(i % j == 0){
            isprime = 0;
            break;
        }
       }
       if(isprime == 1){
        arr[index] = i;
        index++;
       } 
   }
   for(int k = 0;k < index; k++){
    printf("%d ", arr[k]);
   }
   printf("total primes are %d\n", index);
  
   
    return 0;
}