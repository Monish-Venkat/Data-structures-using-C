#include<stdio.h>
#include<conio.h>
void main()
{
  int num=0,rem,rev;
  clrscr();
  printf("Enter the number: ");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("The Reversed Number= %d",rev);
  getch();
}