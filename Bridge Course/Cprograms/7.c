// Program to print the factors of an integer.


#include<stdio.h>

int main(){
    int num;
    printf("Number = ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            /* code */
            printf("%d ",i);
        }
        
    }
    return 0;
}