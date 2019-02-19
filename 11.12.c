#include<stdio.h>
#include<windows.h>
#define LEN 5
char* getnchar(char* str, int n);
int main(void)
{
	char* check;
	char str[LEN];
	puts("enter a sting:");
	check = getnchar(str, LEN - 1);
		puts(check);
	system("pause");
	return 0;
}
char* getnchar(char* str, int n)
{
	int ch;
	for (int i = 0; i < n; i++)
	{
		ch = getchar();

			if ((' ' == ch) || ('\t' == ch) || ('\n' == ch))
				str[i] = '\0';
			else
				str[i] = ch;
	}
	str[LEN-1] = '\0';
	return str;
}