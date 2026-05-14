#include <stdio.h>
int main(){
    int a;
    printf("Hey i have created a guessing game\n\n");
    printf("Game start\n");
    printf("Guess the number betwwen 0 to 20\n\n");
    printf("Enter your guess only between 0 to 20: ");
    scanf("%d", &a);
    
    for (int i = 5; i >= 1;i--){
        
        
        while(a <= 20 | a >= 0){
                if(a == 7){
                printf("\ncorrect guess!");
                break;
                
                }else if(a >= 10 && a < 20 && a > 0){
                    printf("\n\nsorry %d is not close to the number", a);
                    printf("\nremaining tries: %d", i);
                    printf("\ntry again: ");
                    scanf("%d", &a);
                    break;
                }else if(a < 10 && a < 20 && a > 0){
                    printf("\n\nsorry %d is not exact but you are close to it", a);
                    printf("\n remaining tries left: %d", i);
                    printf("\nTry again: ");
                    scanf("%d", &a);
                    break;
                }else if(a > 20 | a < 0){
                    printf("\n\nHey you can only put numbers between 0 to 20");
                    printf("\n Remaining tries: %d", i);
                    printf("\nTry again: ");
                    scanf("%d", &a);
                    break;
                }
                
            }
                
            printf("\nGame over\n");
            break;

        } 
        
        return 0;
    }   