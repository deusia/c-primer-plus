#include<stdio.h>
#include<windows.h>
int main(void)
{
	int ar[8];
	int i;
	printf("Please enter :");
	for (i = 0; i < 8;)
	{
		scanf_s("%d", &ar[i]);
		i++;
	}
	for (i = 7; i > -1; i--)
		printf("%d", ar[i]);
	system("pause");
	return 0;
}