/*
Name:Monish V
Date:19/06/2024
Program:Factorial using recursive funcion in C
*/
#include<stdio.h>
#include<conio.h>
int fact(n)
{
	if(n==0)
		return 1;
	else
		return(fact(n-1)*n);
}
void main()
{
	int num,f;
	clrscr();
	printf("Enter number:");
	scanf("%d",&num);
	f=fact(num);
	printf("Fact = %d",f);
	getch();
}