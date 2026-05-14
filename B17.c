// #include <stdio.h>
// int main(){
//     int n = 0;
//     int start = 0;
//     int temp = 0;
//     printf("Enter the size: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("\n Enter the numbres: ");
//     for(int i = 0;i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int end = n - 1;

   
//     while(start < end){
//         temp = arr[start];
//         arr[start]= arr[end];
//         arr[end]= temp;
//         start++;
//         end--;
//     }

//     for(int i = 0;i < n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n,rev=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     while(n!=0) {
//         rev= (rev*10) + (n%10);
//         n/=10;
//     }

//     printf("%d\n",rev);

//     return 0;
// }

#include<stdio.h>
int main() {
    int arr[5]={7,2,9,4,1};
    int temp=0;
    int largest = arr[0];
    int start=0;
    int end=4;

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
    

    return 0;
}