#include<stdio.h>
#include<windows.h>
#include<ctype.h>                           //have a problem
#define LEN 5
char* word_put(char* str, int n);
int main(void)
{
	char str[LEN];
	printf("Enter a word:");
	word_put(str,LEN-1);
	puts(str);
	system("pause");
	return 0;
}
char* word_put(char* str, int n)
{
	char ch;
		for (int i = 0 ; i < n; i++) {
			ch = getchar();
			if (ch != EOF && isspace(ch))
				continue;
			if (ch != EOF && !isspace(ch))
				str[i] = ch;
	}
		str[LEN] = '\0';
		return str;
}