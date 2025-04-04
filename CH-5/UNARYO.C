#include <stdio.h>
#include <conio.h>

main()
{
	int a = 10;
	clrscr();

	printf("\n %d %d %d %d",a++,--a,++a,a--);
	printf("\n %d %d %d %d",--a,a++,--a,++a);

	getch();
}