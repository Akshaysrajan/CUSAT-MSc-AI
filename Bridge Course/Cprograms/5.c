//Program to print the sum of digits of an integer.

#include<stdio.h>

int main(){

    int Num, sum = 0;
    printf("Enter the digit : ");
    scanf("%d",&Num);

    while(Num != 0){
       sum += Num%10;
       Num /= 10;
    }

    printf("Sum of digit : %d", sum);
    return 0;
}