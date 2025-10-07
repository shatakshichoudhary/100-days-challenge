#include<stdio.h>
int main() {
    float a;
    float b;
    printf("enter the temperature\n");
    scanf("%f",&a);
    b=(a*1.8)+32;
    printf("the temperature in fahrenheit is: %f\n",b);
    return 0;
}