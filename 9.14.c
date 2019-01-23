#include<stdio.h>
#include<windows.h>
double ave(double,double);
int main(void)
{
	double num1, num2;
	printf("enter two numbers:");
		if(scanf_s("%lf %lf",&num1,&num2)==2)
		{
			puts("\nhere is the answer:");
			printf("%lf", ave(num1,num2));
		}
		system("pause");
		return 0;
}

double ave(double a,double b)
{
	double sum;
	a = 1 / a;
	b = 1 / b;
	sum = 1 / (a + b);
	return sum;
   }