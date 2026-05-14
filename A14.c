#include <stdio.h>
int main() {
    float x;
    float y;
    printf("Enter your working hours: ");
    scanf("%f", &x);

    if(x > 40){

        printf("\nyour gross pay:$%.2f\n", ((x-40)*(12*1.5)) + (40*12));
    }
    if(x <= 40){

        printf("Your gross pay:$%.2f\n", 12*x);

    }if((x*12) <= 300.00){
        printf("Tax:$%.2f\n", (x*12) * 0.15);
        printf("Net:$%.2f\n", (x*12) * 0.85);
    }
    
    if(((x-40)*(12*1.5)) + (40*12) >= 300.00 && (x-40)*(12*1.5) + (40*12) <= 450.00){
        printf("Tax:%.2f\n",(300*0.15) +  ((x*12) - 300) * 0.20);

        printf("Net:$%.2f\n",(x*12) - ((300*0.15) +  ((x*12) - 300) * 0.20) );
    }
    if(((x-40)*(12*1.5)) + (40*12) > 450.00){
        printf("Tax:$%.2f\n",(((((x-40)*(12*1.5)) + (40*12)) - 450) *0.25) + (300*0.15) + (150*0.20));

        printf("Net:$%.2f\n", (((x-40)*(12*1.5)) + (40*12)) - ((((((x-40)*(12*1.5)) + (40*12)) - 450) *0.25) + (300*0.15) + (150*0.20))  );
    }
    
    printf("Thanks for the cooperation\n");

    return 0;
}