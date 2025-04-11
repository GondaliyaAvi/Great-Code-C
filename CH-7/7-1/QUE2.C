#include <stdio.h>
#include <conio.h>

main()
{
	int Number;
	clrscr();

	printf("\n \tEnter The Any Number :- ");
	scanf("%d",&Number);

	if(Number < 0)
	{
		clrscr();
		printf("\n \t%d Number Is Negetive.",Number);
	}
	else if(Number > 0)
	{
		clrscr();
		printf("\n \t%d Number Is Positive.",Number);
	}
	else
	{
		clrscr();
		printf("\n \t%d Number Is Naturel. ");
	}

	getch();
}


