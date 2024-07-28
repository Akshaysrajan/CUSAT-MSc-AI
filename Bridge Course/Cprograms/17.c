//Program to read and print the details (name, age & register number) of a number of students.
#include<stdio.h>
struct Student{
    char name[50];
    int age;
    int regNo;
};

int main(){ 

struct Student students[1];

printf("Name: ");
scanf("%s ",students->name);
printf("Age: ");
scanf("%d ",&students->age);
printf("Registration No: ");
scanf("%d ",&students->regNo);


printf("%s ", students->name);
printf("%d ", students->age);
printf("%d ", students->regNo);




return 0;
}