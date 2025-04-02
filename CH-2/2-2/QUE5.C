#include <stdio.h>
#include <conio.h>
#define PI 3.14

main()
{
	int r;

	clrscr();

	printf("\n Enter The Value of radius = ",r);
	scanf("%d",&r);

	printf("\n The Value of PI = %f",PI);

	printf("\n The Perimeter of the circle = %f ",2*PI*r);

	getch();
}