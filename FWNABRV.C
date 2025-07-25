#include<stdio.h>
#include<conio.h>

int getnumber();

void main()
{
	int num;
	clrscr();
	num = getnumber();
	printf("\n you enterd: %d",num);
	getch();
}
int getnumber()
{
	int n;
	printf("\n enter a number : ");
	scanf("%d",&n);
	return n;
}



