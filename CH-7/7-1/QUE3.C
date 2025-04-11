#include <stdio.h>
#include <conio.h>

main()
{
	int Maths, English, Science;
	float Total, Average;
	clrscr();

	printf("\n \tEnter The Maths Marks :-  ");
	scanf("%d",&Maths);
	printf("\n \tEnter The English Marks :- ");
	scanf("%d",&English);
	printf("\n \tEnter The Science :- ");
	scanf("%d",&Science);

	Total = Maths + English + Science;
	Average = Total/3;

	printf("\n \tAverage Mark :- %.2f",Average);


	getch();
}

