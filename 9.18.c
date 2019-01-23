#include<stdio.h>
#include<ctype.h>
#include<windows.h>
double power(double num, int p);
int main(void)
{
	double num;
	int p;

	puts("enter a number:");
	scanf_s("%lf", &num);
	printf("\nnext enter the power:");
	scanf_s("%d", &p);
	printf("\nthe outcome is %0.4lf",
		power(num, p));
	system("pause");
	return 0;
}
double power(double num, int p)
{
	double outcome=1;
	int i;
	if (p > 0) {
		for (i = 0; i < p; i++)
			outcome *= num;
	}
	else
	{
		num = 1 / num;
		p = -p;
		for (i = 0; i < p; i++)
			outcome *=num ;
	}
	return outcome;
}