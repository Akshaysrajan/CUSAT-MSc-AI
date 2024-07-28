//Program using user-defined functions to print the factorial of an integer (recursive & non-recursive).

#include<stdio.h>

long int recursive(int n);
long int nonRecursive (int n);

int main(){

    int num;
    printf("enter a postive number : ");
    scanf("%d", &num);

    printf("R - Factorial : %d",recursive(num));
    printf("NR - Factorial : %d",nonRecursive(num));




    return 0;
}

long int recursive(int n){
    if (n>=1)
    {
        return n*recursive(n-1);
    }else{
        return 1;
    }
    
}

long int nonRecursive(int n){
    long result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}