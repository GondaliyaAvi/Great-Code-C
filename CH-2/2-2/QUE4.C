#include <stdio.h>
#include <conio.h>

main()
{
	int p,r,n,i;

	clrscr();

	printf("\n Enter The Principal amount = ",p);
	scanf("%d",&p);

	printf("\n Enter The rate = ",r);
	scanf("%d",&r);

	printf("\n Enter The Time of Month = ",n);
	scanf("%d",&n);

	i = p*r*n/100;
	printf("\n The Interest = %d",i);


	getch();

}