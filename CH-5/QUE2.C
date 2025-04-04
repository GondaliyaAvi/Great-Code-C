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

	// (a-b)^2
	t= a*a-2*a*b+b*b;
	printf("\n \tThe Value of Formula = %d",t);

	getch();
}