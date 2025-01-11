#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 10
int top=-1;
int stack_arr[size];
void push(int stack_arr[],int value);
int pop(int stack_arr[]);
void palindrome(char str[]);
void display();
void main()
{
	int choice,x;
	char str[10];

	while(1)
	{
		printf("\n Enter stack operations");
		printf("\n 1.Push \n 2.Pop \n 3.Palindrome \n 4.Display \n 5.End");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Enter the item to be pushed:");
			scanf("%d",&x);
			push(stack_arr,x);
			break;
			case 2:
			int r=pop(stack_arr);
			if(r!=-1){
			printf("Deleted item is:%d",r);}
			break;
			case 3:
			printf("Enter the sring:");
			scanf("%s",str);
		    palindrome( str);
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
void push(int stack_arr[],int value)
{

	if(top==size-1)
		printf("\n Overflow");
	else
	{
		
		top = top + 1;
		stack_arr[top]=value;
	}
}
int pop(int stack_arr[])
{
	if(top==-1){
		printf("\n Underflow");
		return -1;
	}else
	{
		return stack_arr[top--];
	
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
void palindrome(char str[]){
    int i,n=strlen(str);
    int pal=1;
    for(i=0;i<n;i++){
        push(stack_arr,str[i]);
    }
    for(i=0;i<n;i++){
        if(pop(stack_arr)!=str[i]){
            pal=0;
        }
    }
    if(pal){
        printf("palindrome!!");
        
    }
    else{
        printf("Not a palindrome!!");
    }
}