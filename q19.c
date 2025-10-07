    #include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("Enter the first side: \n");
    scanf("%d", &a);
    printf("Enter the second side: \n");
    scanf("%d", &b);
    printf("Enter the third side: \n");
    scanf("%d", &c);
    if (a+b>c && b+c>a && c+a>b) {
        printf("The triangle is valid.\n");
    
        if (a==b && b==c)
             printf("The triangle is equilateral.\n");
         else if (a==b || b==c || c==a)
            printf("The triangle is isosceles.\n");
        else 
            printf("The triangle is scalene.\n"); 
        
        if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)    
            printf("The triangle is a right triangle.\n");
        else 
             printf("The triangle is not a right triangle.\n");

     } else 
        printf("The triangle is not valid.\n");         

    return 0;
}
    
