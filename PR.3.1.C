//Write a program to print all alphabets from a to z skipping 3 alphabets using do while loop.

#include<stdio.h>
#include<conio.h>

void main(){

char v;

clrscr();

for(v='a';v<='z';){
printf("-->");
printf(" After skipping 3 alphabets are : ");
printf("%c\n",v);

v+=4;
}

getch();
}