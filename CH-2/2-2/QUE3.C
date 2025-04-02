#include <stdio.h>
#include <conio.h>

main()
{
	int b,h;
	float t;

	clrscr();

	printf("\n Enter The Value of base = ",b);
	scanf("%d",&b);

	printf("\n Enter The Value of height = ",h);
	scanf("%d",&h);

	t = 0.5 * b * h;
	printf("\n The area of a Triangle = %f",t);

	getch();
}