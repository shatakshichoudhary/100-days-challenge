//Merge two arrays.


#include <stdio.h>
int main(){
    int n1,n2,i,temp;
    printf("enter the no of elements in array 1");
    scanf("%d",&n1);

    int arr1[n1];
    printf("Enter %d elements:",n1);
    for (i = 0; i<n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter the no of elements in array 2");
    scanf("%d",&n2);

    int arr2[n2];
    printf("Enter %d elements:",n2);
    for (i = 0; i<n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merge[n1+n2];
    for (i=0 ; i<n1; i++){
        merge[i]= arr1[i];
    }

    for (i=0 ; i<n2 ; i++){
        merge[n1+i]= arr2[i];
    }
    printf("merged array is ");
    for(i=0; i<n1+n2 ;i++){
        printf("%d ", merge[i]);

    }

    return 0;

}