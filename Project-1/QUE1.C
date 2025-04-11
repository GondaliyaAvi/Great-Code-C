#include <stdio.h>
#include <conio.h>

main()
{
	int C;
	float F;
	clrscr();

	printf("\n \tEnter The Temprature in Celsius : ");
	scanf("%d",&C);

	F = (C * 1.8) + 32;
	printf("\n \tThe Temprature In Fahrenhit : %f ",F);

	getch();
}
