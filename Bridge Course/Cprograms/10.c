//Program to search for an element in an unsorted array of integers

#include<stdio.h>

//linear search 
int search(int arr[], int n, int key){
    int i;
    for ( i = 0; i < n; i++)
    {
        /* search code */
        if (arr[i]==key)
            return i;        
    }
    return -1;
}

int main(){

  
    int n,key,i;
  
    printf("Number of elements = ");
    scanf("%d",&n);
    int arr[n];

// entering array values
    for ( i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }

    printf("Key = ");
    scanf("%d",&key);
    
// assigning values to the search function
int result = search(arr,n,key);

//checking the result of search function
if (result == -1)
{
    printf("\n404");
}else{
    printf("\n200 at index : %d", result);
}

    return 0;
}