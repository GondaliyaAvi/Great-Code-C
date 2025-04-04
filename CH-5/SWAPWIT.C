#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("\n \tEnter The Value A = ",a);
	scanf("%d",&a);
	printf("\n \tEnter The Value B = ",b);
	scanf("%d",&b);

	printf("\n \tThe Swapping Value. ");
	c=a;
	a=b;
	b=c;
	printf("\n \tThe Swapping Value A = %d",a);
	printf("\n \tThe Swapping Value B = %d",b);

	getch();
}