#include<stdio.h>
#include<windows.h>
int main(void)
{
	char ch = 65;
	int i, k, t;
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k - 1 < i; k++)
			putchar(ch++);
			ch = ch - 2;
		for (t = 0; t < i; t++)	
			putchar(ch--);
		printf("\n");
			ch = 65;
	}
	system("pause");
	return 0;
}