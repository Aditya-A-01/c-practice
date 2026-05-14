#include <stdio.h>
int main(){
    int marks;
    printf("\nEnter your marks only 0 to 100:");
    scanf("%d", &marks);

    switch(marks / 10){
        case 10:
        case 9:
        printf("Your grade: A\n");
        break;

        case 8:
        printf("Your grades: B\n");
        break;

        case 7:
            if(marks>=75)
                printf("Your grade : B\n");
            else
                printf("Your grade :C\n");
            break;

        case 6:
        case 5:
        printf("Your grade: C\n");
        break;

        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        printf("Fail\n");
        break;

        default:
        printf("Invalid\n");
        

    }
    return 0;

}