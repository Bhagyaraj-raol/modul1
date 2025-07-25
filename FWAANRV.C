#include<stdio.h>
#include<conio.h>

void add(int,int);
void main()
{
	int a=5,b=10;
	clrscr();
	add(a,b);
	getch();
}

void add(int x,int y)
{
	printf("sum = %d",x+y);
}


