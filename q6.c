#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping\n");
    printf("the first number is: %d\n",a);
    printf("the second number is: %d\n",b);
    return 0;
}