#include <stdio.h>
/*
 * main: entry point
 * Description: A program to practice increamet and decrement
 * Return: Always (0) sucess 
 * */
int main(void)
{
int x;
int y;
int r;
int age;
x=1;
y=2;
age=30;
r= ++x;
printf("current value of r is: %d \n", r);
age = r++;
printf("the current value of r is: %d and \n the current value of age(30) is : %d \n", r, age);
return(0);

}
