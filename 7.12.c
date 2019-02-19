#include<stdio.h>
#include<windows.h>
int main(void)
{
	int i = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		putchar(ch);
		i++;
		if (i % 8 == 0)
			printf("\n");
	}	
	system("pause");
	return 0;
}