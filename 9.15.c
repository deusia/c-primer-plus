#include<stdio.h>
#include<windows.h>
void large_of(double*, double*);
int main(void)
{
	puts("please put two number");
		double num1, num2;
	if (scanf_s("%lf%lf", &num1, &num2) == 2)
	{
		large_of(&num1, &num2);
		printf("%lf  %lf", num1, num2);
	}
	system("pause");
	return 0;
}
void large_of(double *pt1, double *pt2)
{

	if (*pt1 > *pt2)
		*pt2 = *pt1;
	else
		*pt1 = *pt2;

}