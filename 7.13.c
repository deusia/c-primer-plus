#include<stdio.h>
#include<windows.h>
#define SIZE 8
int main(void)
{
	int ar[SIZE];
	int even = 0;
	int odd = 0;
	int ae = 0;
	int ao = 0;
	int i;
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &ar[i]);
	for (i = 0; i < SIZE; i++)
		printf("%d", ar[i]);
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		if (ar[i] == 0) break;
		if (i % 2 == 0)
		{
			ao += ar[i];
			odd++;
		}
		else
		{
			ae += ar[i];
			even++;
		}
	}
	printf("even have:%d,odd have:%d,ae:%d,ao:%d.", even, odd, ae, ao);
	
	system("pause");
	return 0;

}