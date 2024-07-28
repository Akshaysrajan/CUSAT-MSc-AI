//Program to test whether two strings are equal.

#include<stdio.h>
#include<string.h>

int main(){

    char str1[100];
    char str2[100];

    printf("String 1 : ");
    // scanf("%s", &str1); this method does not support spaces ie akshay:200 !! akshay s rajan:404
    // gets(str1);  we can also use this method instead of 'fgets' but this can lead to buffer overflow vulnerabilites.

    printf("String 2 : ");

    if (strcmp(str1, str2) == 0) {
    printf("The strings are equal.\n");
} else {
    printf("The strings are not equal.\n");
}
    return 0;
}