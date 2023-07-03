//Write a program to count the total number of digits in a number.

#include<stdio.h>
#include<conio.h>

void main(){

int v,h=0;

clrscr();

printf("Enter any kind of number : ");
scanf("%d",&v);

while(v!=0){
  v = v/10;
  h++;
}
printf("Number of digits are %d",h);

getch();
}