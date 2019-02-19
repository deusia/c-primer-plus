#include<stdio.h>
#include<ctype.h>
#include<windows.h>
#define LEN 10
char* getword(char* str);
int main(void)
{
	char str[LEN];
	char* fn;
	printf("Enter a word:");
	fn = getword(str);

	printf("\nThe word you entered is ");
	puts(str);
	system("pause");
	return 0;
}
char* getword(char* str)
{
	int ch;
	char* orig = str;
	// skip over initial whitespace
	while ((ch = getchar()) != EOF && isspace(ch))
		continue;
	if (ch == EOF)
		return NULL;
	else
		*str++ = ch; // first character in word
	   // get rest of word
	while ((ch = getchar()) != EOF && !isspace(ch))
		* str++ = ch;
	*str = '\0';
	if (ch == EOF)
		return NULL;
	else
	{
		while (ch != '\n')
			ch = getchar();
		return orig;
	}
}