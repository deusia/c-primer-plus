#include<stdio.h>
#include<windows.h>
#define SIZE 8
int main(void)
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.': ch = '!';
			break;
		case'!': printf("!");
			break;
		}
	}

	system("pause");
	return 0;

}