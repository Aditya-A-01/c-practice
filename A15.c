#include <stdio.h>

#define grosspay 12.00
#define Tax_300 0.15
#define Tax_150 0.20
#define Tax_rest 0.25

int main(){
    float hours;
    float gross;
    float Tax;
    float netpay;

    printf("Enter your working hours: ");
    scanf("%f", &hours);

    if(hours <= 40){
        gross = hours * grosspay;
    }else{
        gross = (((hours - 40) * (grosspay * 1.5)) + (40*grosspay));
    }
    if(gross <= 300){
        Tax = gross * Tax_300;
        netpay = gross - Tax;
    }
    else if(gross >300 && gross <= 450){
        Tax = (((gross - 300) * Tax_150) + (300* Tax_300));
        netpay = gross - Tax;
    }else{
        Tax = (((gross - 450) * Tax_rest) + (300*Tax_300) + (150*Tax_150));
        netpay = gross - Tax;
    }
  
    printf("gross:$%.2f\n", gross);
    printf("Tax:$%.2f\n", Tax);
    printf("net:$%.2f\n", netpay);

    return 0;

}
