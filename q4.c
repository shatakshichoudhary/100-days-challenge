#include<stdio.h>
int main() {
    float a;
    float c;
    float d;
    printf("enter the radius of the circle\n");
    scanf("%f",&a);
    c=3.14*a*a;
    d=6.28*a;
    printf("the circumference of the circle is: %f\n",d);
    printf("the area of the circle is: %f\n",c);
    return 0;
}
