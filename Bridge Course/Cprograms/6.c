//Program to print whether an input integer is odd or even.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the Digit : ");
    scanf("%d",&num);

    if (num%2 == 0)
    {
        printf("Even");
    }else{
        printf("Odd");
    }


    
    return 0;
}