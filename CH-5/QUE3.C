#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,t;
	clrscr();

	printf("\n \tEnter The Value A = ",a);
	scanf("%d",&a);

	printf("\n \tEnter The Value B = ",b);
	scanf("%d",&b);

	// (a+b)^3
	t = a*a*a + 3*a*a*b + 3*a*b*b+ b*b*b;
	printf("\n \tThe Value of Formula is = %d ",t);

	getch();
}