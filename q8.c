#include<stdio.h>
int main() {
    int n;
    int sum=0;

//applying for loop
    printf("Enter the number till which you want to sum: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}