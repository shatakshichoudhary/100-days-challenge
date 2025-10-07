#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    float f;
    printf("enter the number\n");
    scanf("%d\n",& a);
    printf("enter the other number\n");
    scanf("%d\n",& b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("sum is %d\n",c);
    printf("subtraction is %d\n",d);
    printf("product is %d\n",e);
    printf("division is %f\n",f);
    return 0;

}