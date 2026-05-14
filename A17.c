#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));    // this changes the number every time when code runs 
    //by adding this random rather than taking same seed number it will take from the numbers based on time

    int a;
    int guess = rand() % 21;

    printf("Hey i have made a game\n");
    printf("it is a guessing game\n\n");

    for(int i = 5;i >= 1; i--){

        printf("\n Enter the number: ");
        scanf("%d", &a);

        if(a > 20 || a < 0){
            printf("hey only numbers between 0 to 20");

        }else if(a == guess){
            printf("\nCorrect\n");
            break;
        }else if(a > guess){
            printf("\nsoory %d is high", a);
        }else if(a < guess){
            printf("\nsorry %d is low", a);
        }
        printf("\nRemaing tries left:%d", i - 1);
        printf("\nTry again");


    } printf("\n  Game over \n");

    return 0;
  }  

