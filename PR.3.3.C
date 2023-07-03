//Write a program to find the sum of a first and the last digit of numbers.


#include<stdio.h>
#include<conio.h>

void main(){

int b,r,t,s;

clrscr();
printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
printf("Enter any kind of number : \n");
printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
scanf("%d",&b);

t=b%10;

while(b>10){
r=b/10;
b=r;}
s=r+t;

printf("The sum of a first and the last digit of a number is%d",s);

getch();
}
