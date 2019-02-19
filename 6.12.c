#include<stdio.h>
#include<windows.h>
int main(void)
{
	float sum=0;
	float i = 1.0;
	int n;
	printf("enter a number(biggerthan 1.0):");
	scanf_s("%d", &n);
	printf("1.0");
	for (i = 2.0; i <= n; i++)
	{
		sum += i;
		printf("+%.1f", i);
	}
	printf("=%f", sum+1.0);
	system("pause");
	return 0;
}
//the function is to sum1.0+2.0+......+n
#include<stdio.h>
#include<windows.h>
int main(void)
{
	float sum=0;
	int i = 1;
	int n;
	printf("enter a number(biggerthan 1.0):");
	scanf_s("%d", &n);
	printf("1.0");
	for (i = 2; i <= n; i++)
	{
		if (i%2==0)
			i = -i;
		sum += i;
		printf("%+d.0", i);
		if (i % 2 == 0)
			i = -i;
	}
	printf("=%f", sum+1.0);
	system("pause");
	return 0;
}
//the function is to sum1.0-2.0+3.0-4.0+......+n