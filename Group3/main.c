#include <stdio.h>

int main() {
    double unit1, unit2, unit3, unit4, unit5, unit6, unit7, unit8, unit9, unit10, total, average;
    printf("enter marks for unit1");
    scanf("%lf", &unit1);
    printf("enter marks for unit2");
    scanf("%lf", &unit2);
    printf("enter marks for unit3");
    scanf("%lf", &unit3);
    printf("enter marks for unit4");
    scanf("%lf", &unit4);
    printf("enter marks for unit5");
    scanf("%lf", &unit5);
    printf("enter marks for unit6");
    scanf("%lf", &unit6);
    printf("enter marks for unit7");
    scanf("%lf", &unit7);
    printf("enter marks for unit8");
    scanf("%lf", &unit8);
    printf("enter marks for unit9");
    scanf("%lf", &unit9);
    printf("enter marks for unit10");
    scanf("%lf", &unit10);
    total = unit1 + unit2 + unit3 + unit4 + unit5 + unit6 + unit7 + unit8 + unit9 + unit10;
    average = total/10;
    printf("Average = %lf", average);
    return 0;
}