// Count even and odd numbers in an array.


#include <stdio.h>
int main() 
{
    int i, n , even = 0, odd = 0;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) 
    {
        if(arr[i] %2==0)
            even++;
        else
            odd++;
    }

    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);

    return 0;
}