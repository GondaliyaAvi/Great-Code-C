#include <stdio.h>
#include <conio.h>

main()
{
	int N;
	clrscr();

	printf("\n \tEnter The Any Number :- ");
	scanf("%d",&N);

	if(N%2 <= 0)
	{
		clrscr();
		printf("\n \tThe %d Is EVEN Number.",N);
	}
	else
	{
		clrscr();
		printf("\n \tThe %d Is Odd Number.",N);
	}

	getch();
}