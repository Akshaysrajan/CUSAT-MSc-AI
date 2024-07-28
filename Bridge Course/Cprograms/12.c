//Program to print a string in reverse

#include<stdio.h>
#include<string.h> //to use strlen function

int main(){

    char str[100]; // we use array to store string values

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int i;
    for ( i = len - 1; i >= 0; i--) // to print in reverse order 
    {
        printf("%c", str[i]);
    }
    return 0;
}