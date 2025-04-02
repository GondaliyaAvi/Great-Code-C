#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
	int r;

	clrscr();
	printf("Enter The Value Radius = ");
	scanf("%d",&r);
	printf("%f \n",PI);
	printf("The area of Circle is %f \n",PI*r*r);

	getch();
}