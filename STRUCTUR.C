#include<stdio.h>
#include<conio.h>
struct student
{
	char usn[10];
	char name[15];
	int m,c,p,per;
}std[4];
void main()
{
	int i;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("Enter USN \n");
		scanf("%s",&std[i].usn);
		printf("Enter name \n");
		scanf("%s",&std[i].name);
		printf("Enter Math C and Physics marks: \n");
		scanf("%d %d %d",&std[i].m,&std[i].c,&std[i].p);
		std[i].per=(std[i].m+std[i].c+std[i].p)/3;
		if(std[i].per>90)
			printf("Congragulations %s you have scored distinction\n ",std[i].name);
		else if(std[i].per<40)
			printf("Sorry %s you have failed miserably\n",std[i].name);
		else
			printf("%s you have passed and scored above avg\n",std[i].name);
	}
	getch();
}
