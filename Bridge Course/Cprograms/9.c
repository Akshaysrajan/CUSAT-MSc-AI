// Program to find the sum of elements of an array of integers/real values.
#include<stdio.h>

int main(){

  
    int n,i;
    int sum=0;

    printf("Number Of Elements = ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        sum += arr[i];
    }

    printf("Sum : %d", sum );
    return 0;
}