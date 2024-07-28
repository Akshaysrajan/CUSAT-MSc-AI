//Program to print the number of instances of an element in an unsorted array of integers.

#include<stdio.h>

int counter(int arr[],int n,int key){
    int flag = 0;
    int i;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            flag++;
        }
        
    }
    return flag; 
}


int main(){
    int n,i,key;
    
    printf("Number of elemets = ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Key = ");
    scanf("%d",&key);

    int exe = counter(arr,n,key);
    printf("Count = %d ", exe);

    return 0;
}