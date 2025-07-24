#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[50];
	int len;
	clrscr();
	printf("\n enter a string : ");
	gets(str);
	len = strlen(str);
	printf("\n length of string : %d" , len);
	getch();
}
