#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter value of A:");
	scanf("%d",&a);
	printf("\nEnter value of B:");
	scanf("%d",&b);
	c=a+b;
	printf("\nAddition of %d & %is : %d",a,b,c);
	c=a-b;
	printf("\nsubtraction of %d & %d is : %d",a,b,c);
	c=a*b;
	printf("\nmultiplication of %d & %d is : %d",a,b,c);
	c=a/b;
	printf("\ndivision of %d & %d is : %d",a,b,c);
	getch();
}