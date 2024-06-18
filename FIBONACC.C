#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,var1=0,var2=1,nexterm=0;
	clrscr();
	printf("Enter a positive number:");
	scanf("%d",&n);
	nexterm = var1+var2;
	while(nexterm<=n)
	{
		var1=var2;
		var2=nexterm;
		nexterm=var1+var2;
	}
	printf("The fibonacci series is: %d",nexterm);
	getch();
}