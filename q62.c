//Reverse an array without taking extra space.

#include <stdio.h>
int main(){
    int n,i,temp;
    printf("enter the no of elements");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:",n);
    for (i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] =temp;
    }

    printf("reversed array");
    for(i=0;i<n; i++){
        printf("%d", arr[i]);

    }
    return 0;


}