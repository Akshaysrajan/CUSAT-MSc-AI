#include<stdio.h>

int main(){

int a;
int b; 

printf("A = ");
scanf("%f",&a);
printf("\n B = ");
scanf("%f",&b);

int sum = a + b;
printf("%.2 + %.2 = %.2 \n",a,b,sum);

int difference = a - b;
printf("%.2 - %.2 = %.2 \n",a,b,difference);

int Multiply = a * b;
printf("%.2 * %.2 = %.2 \n",a,b,Multiply);

int division = a / b;
printf("%.2 + %.2 = %.2 \n",a,b ,division);

int modulus = a % b;
printf("%.2 + %.2 = %.2 \n",a,b,modulus);

}