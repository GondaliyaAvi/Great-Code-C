#include <stdio.h>
#include <conio.h>

main()
{
	int a,b;
	clrscr();

	printf("\n \tEnter The Value is A = ",a);
	scanf("%d",&a);
	printf("\n \tEnter The Value is B = ",b);
	scanf("%d",&b);

	printf("\n \tThe Swapping Value. ");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n \tThe Swapping Value of A = %d",a);
	printf("\n \tThe Swapping Value of B = %d",b);

	getch();
}