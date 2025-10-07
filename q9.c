#include<stdio.h>
#include<math.h>
int main() {
    int p,r,t;
    float si, ci;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the time period (in years): ");
    scanf("%d", &t);
   
    si = (p * r * t) / 100;
    ci = p * (pow((1 + r / 100.0), t)) - p;
   
    printf("The Simple Interest is: %f\n", si);
    printf("The Compound Interest is: %f\n", ci);
    return 0;
}