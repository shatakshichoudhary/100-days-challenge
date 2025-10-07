#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    printf("enter the length of the rectangle\n");
    scanf("%d",&a);
    printf("enter the breadth of the rectangle\n");
    scanf("%d",&b);
    c=a*b;
    d=2*a+2*b;
    printf("the perimeter of the rectangle:%d\n",c);
    printf("the area of the rectangle is:%d\n",d);
    return 0;
}