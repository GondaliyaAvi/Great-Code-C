#include <stdio.h>
#include <conio.h>

main()
{
	int Num1, Num2;
	clrscr();

	printf("\n \tEnter The Any Number :- ");
	scanf("%d",&Num1);
	printf("\n \tEnter The Any Number :- ");
	scanf("%d",&Num2);

	if(Num1 > Num2)
	{
		clrscr();
		printf("\n \tThe %d is Maximum Number. ",Num1);
	}
	else
	{
		clrscr();
		printf("\n \tThe %d is Maximum Number. ",Num2);
	}


	getch();
}