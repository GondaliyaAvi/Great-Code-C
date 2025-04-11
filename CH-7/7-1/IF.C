#include <stdio.h>
#include <conio.h>

main()
{
	int age;
	clrscr();

	printf("Enter Your Age :- ");
	scanf("%d",&age);

	if(age>=18)
	{
		clrscr();
		printf("You Can VOTE");
	}
	else
	{
		clrscr();
		printf("You Can Not VOTE");
	}


	getch();
}