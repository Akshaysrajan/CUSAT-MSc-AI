//Program using user-defined functions to print the sum of elements of an integer array.
#include<stdio.h>
int sumIt(int arr[], int size);

int main(){
    int size;
    int i;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the values: ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int perform = sumIt(arr,size);
    

    printf("%d",perform);
    return 0;
}


int sumIt(int arr[], int size){
    int total = 0;
    for ( int i = 0; i < size; i++)
    {

        total +=  arr[i];
    }
    return total;
    
}