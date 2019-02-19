#include<stdio.h>
#include<windows.h>
#define SIZE 5
float calcu(float,float);
int main(void)
{
	int num1, num2;
	int num3 = 0;
	printf("Enter lower and upper integer:");
	while (scanf_s("%d%d",&num1, &num2) == 2)
	{
		int i;
		for (i = num1; i <= num2; i++)
			num3 += (i * i);
		printf("The sum of the squares from %d and %d is %d",
			num1*num1, num2*num2, num3);
		printf("\n");
		printf("Enter nest set of limits:");
	}
	printf("bye!!!");
	system("pause");
	return 0;
}
