#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\n A is positive number");
	}
	else
	{
		printf("\n A is negative number");
	}
	getch();
}