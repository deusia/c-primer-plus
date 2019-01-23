#include<stdio.h>
#include<windows.h>
int main(void)
{
	char ch;
	char ct = 'a';
	int n = 0;
	while ((ch = getchar()) != '#')
	{

		if (ch == 'i'&&ct == 'e')
			n++;
		ct = ch;
		printf("%c", ch);
	}
	printf("n=%d", n);

	system("pause");
	return 0;

}