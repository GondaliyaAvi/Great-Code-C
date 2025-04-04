#include <stdio.h>
#include <conio.h>

main()
{
	int FAngle, SAngle, TAngle;
	clrscr();

	printf("\n \tEnter The Frist Angle Triangle : ",FAngle);
	scanf("%d",&FAngle);
	printf("\n \tEnter The Second Angle Triangle : ",SAngle);
	scanf("%d",&SAngle);

	TAngle =180 - (FAngle+SAngle);
	printf("\n \tThird Angle : %d",TAngle);

	getch();

}