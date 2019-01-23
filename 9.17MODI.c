#include<stdio.h>
#include<ctype.h>
#include<windows.h>
int judge_alpha(char ch);
int main(void)
{
	char ch;
	while (scanf_s("%c", &ch,1) == 1)
	{
		if ('\n' == ch)
			continue;
		if (ch >= 'A'&&ch <= 'z')
			printf("the word's position is %d", judge_alpha(ch));
		else
			printf("%d", judge_alpha(ch));
	}
	system("pause");
	return 0;
}
int judge_alpha(char ch)
{
	if (ch>='A'&&ch<='Z')
		return ch-'A'+1;
	else {
		if (ch >= 'a'&&ch <= 'z')
			return ch - 'a' + 1;
		else
			return -1;
	}
}
