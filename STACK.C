#include<stdio.h>
#include<conio.h>
#define size 4
int top=-1;
int stack_arr[size];
void push();
void pop();
void peek();
void display();
void main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\n Enter stack operations");
		printf("\n 1.Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.End");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			peek();
			break;
			case 4:
			display();
			break;
			case 5:
			exit(1);
			default:
				printf("\n Enter a valid choice");
		}
	}
}
void push()
{
	int x;
	if(top==size-1)
		printf("\n Overflow");
	else
	{
		printf("\n Enter the element to be pushed");
		scanf("%d",&x);
		top = top + 1;
		stack_arr[top]=x;
	}
}
void pop()
{
	if(top==-1)
		printf("\n Underflow");
	else
	{
		printf("\n Popped element %d",stack_arr[top]);
		top = top - 1;
	}
}
void peek()
{
	int val;
	if(top==-1)
		printf("\n Stack is empty");
	else
	{
		val=stack_arr[top];
		if(val!=-1)
			printf("\n The value stored at the top of the stack is %d ",val);
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("\n Stack is empty");
	else
	{
		for(i = top;i>=0;i--)
			printf("\n %d",stack_arr[i]);
	}
}


