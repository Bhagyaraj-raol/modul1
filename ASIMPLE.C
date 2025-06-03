#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("\nEnter array elements\n");
	for(i=0; i<5;i++)
	{
		printf("enter %d elements : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nsum : %d",sum);
	printf("\nArray elements are \n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] :  %d",i,a[i]);
	}
	getch();
}

