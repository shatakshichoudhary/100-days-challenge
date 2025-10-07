#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,d;
    float x,y,q,r,realPart,imagePart;
    printf("Enter a,b,c (in the format ax^2 + bx + c): ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
   
    if(d>0) {
        printf("Roots are real and different.\n");
            x=(-b+sqrt(d))/(2*a);
            y=(-b-sqrt(d))/(2*a);
            printf("Roots are: %.2f and %.2f\n",x,y);

    }else if (d<0) {
        printf("Roots are complex and different.\n");
            realPart = -b / (2*a);
            imagePart = sqrt(-d) / (2*a);
            printf("Root1 = %.2f + %.2fi\n", realPart, imagePart);
            printf("Root2 = %.2f - %.2fi\n", realPart, imagePart);

    }else {
        printf("Roots are real and same.\n");
            q=r=-b/(2*a);
                printf("Roots are : %.2f and %.2f\n",q,r);        
    }
    return 0;
}