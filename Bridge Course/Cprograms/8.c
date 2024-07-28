//Program to print an integer in reverse.

#include<stdio.h>
int main(){

    int num, reversedInt = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    while(num != 0){
       int Ldigit = num % 10; 
       reversedInt = reversedInt*10 + Ldigit;
       num /= 10;
    }

    printf("Reversed int = %d", reversedInt);
    return 0;
}