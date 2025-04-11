#include <stdio.h>
#include <conio.h>

main()
{
	int Num, Div;
	clrscr();

	printf("\n \tEnter The Any Number :- ");
	scanf("%d",&Num);

	Div = Num / 2;

	if(Div * 2 == Num)
	{
		clrscr();
		printf("\n \tThe %d Is EVEN Number.",Num);
	}
	else
	{
		clrscr();
		printf("\n \tThe %d Is Odd Number.",Num);
	}

	getch();
}