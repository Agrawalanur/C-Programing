#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("% -5.*s\n",i,"*****");

	}
	getch();
}
