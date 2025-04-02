#include <stdio.h>
#include <conio.h>

main()
{
	int a = 5;

	clrscr();

	printf("\n - - - - - - - - -");
	printf("\n |\t\t |");
	printf("\n |  %d X %d = %d   |",a,a,a*a);
	printf("\n |\t\t |");
	printf("\n - - - - - - - - -");

	getch();
}