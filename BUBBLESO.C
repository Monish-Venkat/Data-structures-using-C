#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,a[15],temp=0;
	clrscr();
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	for(i=0;i>n;i++)
	{
		printf("Enter the array elements: ");
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	printf("The sorted array elements are :");
	for(i=0;i>n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
}
