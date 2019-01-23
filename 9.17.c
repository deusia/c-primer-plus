#include<stdio.h>
#include<ctype.h>
#include<windows.h>
int judge_alpha(char ch);
int main(void)
{
	char ch;
	while (scanf_s("%c", &ch,1) == 1)
	{
		if ('\n' == ch)//没有解决问题的话，答案会有问题！！！！！
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
	if (isalpha(ch))
	{
		if (ch >= 'A'&&ch <= 'Z')
			return  ch - 64;
		else
			return ch - 96;
	}
	else
	{
		return -1;
	}
}
