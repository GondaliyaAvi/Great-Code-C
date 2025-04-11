#include <stdio.h>
#include <conio.h>

main()
{
	int Marks;
	clrscr();

	printf("\n \tEnter The Your Marks :- ");
	scanf("%d",&Marks);

	if(Marks>=91 && Marks<=100)
	{
		clrscr();
		printf("\n \tYour Grade Is :- A+ ");
	}
	else if(Marks >= 81 && Marks <= 90)
	{

		clrscr();
		printf("\n \tYour Grade Is :- A ");
	}
	else if(Marks >= 71 && Marks <= 80)
	{
		clrscr();
		printf("\n \tYour Grade Is :- B+ ");
	}
	else if(Marks >= 61 && Marks <= 70)
	{
		clrscr();
		printf("\n \tYour Grade Is :- B ");
	}
	else if(Marks >= 51 && Marks <= 60)
	{
		clrscr();
		printf("\n \tYour Grade Is :- C+ ");
	}
	else if(Marks >= 41 && Marks <= 50)
	{
		clrscr();
		printf("\n \tYour Grade Is :- C ");
	}
	else if(Marks >= 33 && Marks <= 40)
	{
		clrscr();
		printf("\n \tYour Grade Is :- D ");
	}
	else if(Marks >= 0 && Marks <= 32)
	{
		clrscr();
		printf("\n \tYour Are Faild... ");
	}
	else
	{
		clrscr();
		printf("\n \tMarks Is Not Valid.");
	}
	getch();
}