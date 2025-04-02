#include <stdio.h>
#include <conio.h>

main()
{
	int l;

	clrscr();

	printf("Enter The Value of Length :");
	scanf("%d",&l);
	printf("l = %d \n",l);
	printf("The area of a square = %d \n",l*l);

	getch();
}