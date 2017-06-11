#include <stdio.h>

int main() {
   double a, b, c;
    printf("enter three sides of a triangle:\n"
                   "");
    printf("side a:");
    scanf("%lf", &a);
    printf("side b:");
    scanf("%lf", &b);
    printf("side c:");
    scanf("%lf", &c);

    if ((a+b)>c && (b+c)>a && (a+c)>b) {
        printf("This triangle exists!");
    }
    else{
        printf("This triangle does not exist!");
    }
    return 0;
}