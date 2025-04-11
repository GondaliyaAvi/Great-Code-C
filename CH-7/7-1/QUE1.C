#include <stdio.h>
#include <conio.h>

main()
{
	int Num1, Num2;
	clrscr();

	printf("\n \tEnter The Frist Number : ");
	scanf("%d",&Num1);
	printf("\n \tEnter The Second Number : ");
	scanf("%d",&Num2);

	if(Num1 < Num2)
	{
		clrscr();
		printf("\n \tThe Minimum Value Is :- %d ",Num1);
	}
	else
	{
		clrscr();
		printf("\n \tThe Minimum Value Is :- %d ",Num2);
	}
	getch();
}