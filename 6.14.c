#include<stdio.h>
#include<windows.h>
int main(void)
{
	char ch = 65;
	int i, k;
	for (i = 0; i < 6; i++)
	{
		for (k = 0; k - 1 < i; k++)
			putchar(ch++);
		printf("\n");
	}
	system("pause");
	return 0;
}
