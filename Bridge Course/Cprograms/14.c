//Program to read and print a string containing space characters.
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];

    printf("enter the string: ");
    gets(str);

    printf("%s", str);


    return 0;
}