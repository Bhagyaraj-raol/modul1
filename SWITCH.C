#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ans,choice;
	clrscr();
	printf("\nenter A:");
	scanf("%d",&a);
	printf("\nenter B:");
	scanf("%d",&b);
	printf("\n*******************************\n");
	printf("\n\n1.addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\n********************************\n");
	printf("\n\nenter your choice");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("\nAddition : %d",ans);
			break;

		case 2:
			ans=a-b;
			printf("\nSubtraction : %d",ans);
			break;

		case 3:
			ans=a*b;
			printf("\nMmultiplication : %d",ans);
			break;

		case 4:
			ans=a/b;
			printf("\nDivision : %d",ans);
			break;

		default:
			printf("\n invalid choice");
			break;
	}
	printf("\n*******************************\n");
	getch();
}

