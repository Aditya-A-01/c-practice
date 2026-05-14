#include <stdio.h>
int main(){
    int marks;
    char operators = ('/', '>', '<', '=');
    printf("Enter your marks 0 to 100: ");
    scanf("%d", &marks);
    
    switch(marks <= 100 && marks >= 90){
        case 1:
        printf("your grade : A\n");
        break;
    }
    switch(marks <= 89 && marks >= 75){
        case 1:
        printf("your grade : B\n");
        break;
    }
    switch(marks <= 74 && marks >= 50){
        case 1:
        printf("your grade: C\n");
        break;
    }
    switch(marks < 50 && marks >= 0){
        case 1:
        printf("Fail: %d is lower than passing marks\n", marks);
        break;
    }
    switch(marks >= 101){
        case 1:
        printf("invalid number\n");
        break;
    }


    return 0;
}