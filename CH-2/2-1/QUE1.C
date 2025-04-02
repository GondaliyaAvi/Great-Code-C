#include <stdio.h>
#include <conio.h>

main()
{
	int a = 12 ,b = 6;

	clrscr();

	printf("\n Addition of %d + %d is = %d ",a,b,a+b);
	printf("\n Subtraction of %d - %d is = %d ",a,b,a-b);
	printf("\n Multiplication of %d * %d is = %d",a,b,a*b);
	printf("\n Division of %d / %d = %d",a,b,a/b);
	printf("\n Module of %d  %d = %d",a,b,a%b);

	printf("\n \n %d + %d = %d",a,b,a+b);
	printf("\n %d - %d = %d",a,b,a-b);
	printf("\n %d * %d = %d",a,b,a*b);
	printf("\n %d / %d = %d",a,b,a/b);
	printf("\n %d  %d = %d",a,b,a%b);


	getch();
}