#include <stdio.h>
#include <conio.h>

main()
{
	int Salary, HRA, DA, TA, GrossSalary;
	clrscr();

	printf("\n \tEnter The Base Salary : ",Salary);
	scanf("%d",&Salary);

	HRA = Salary * 10/100;
	printf("\n \t HRA : \t %d",HRA);

	DA = Salary * 5/100;
	printf("\n \t DA : \t %d",DA);

	TA = Salary * 8/100;
	printf("\n \t TA : \t %d",TA);

	printf("\n \tGross Salary : Rs.= %d",Salary + HRA + DA + TA);

	getch();

}