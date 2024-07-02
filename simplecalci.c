#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2,result;
    char opr;
    clrscr();
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Choose an operator: ");
    scanf(" %c",&opr);
    switch(opr)
    {
	        case'+':
	        result=num1+num2;
	        break;
	        case'-':
	        result=num1-num2;
      	  break;
       	  case'*':
       	  result=num1*num2;
      	  break;
      	  case'/':
	        result=num1/num2;
	        break;
       	  default:
      	  printf("ENTER A PROPER OPERAND!!");
    }
    printf("The result is: %f",result);
    getch();
}