#include <stdio.h>

int main() {
   int gross, net, tax;
    printf("input gross salary:");
    scanf("%d", &gross);
    if(gross<20000){
        tax = 0;
    }
    else if(gross>=20000 && gross<30000){
       tax = gross*0.15;
    }
    else if (gross>=30000 && gross<40000){
        tax = gross * 0.25;
    }
    else if(gross>=40000){
        tax = gross * 0.3;
    }
    net = gross - tax;
    printf("Net salary is %d and tax is %d", net, tax);
    return 0;
}
