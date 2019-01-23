#include<stdio.h>
#include<windows.h>
int sys(char);
int main(void)
{
	char ch;
	while (scanf_s("%c", &ch) == 1)
	{
		if (ch >= 'A'&&ch <= 'z')
			printf("the word's position is %d", sys(ch))
		else
			pritnf("%d", sys(ch));
	}
	system("pause");
	return 0;
}
int sys(char ch)
{ 
	if (ch >= 'A'&&ch <= 'Z')
		return (ch - 64); 
	if (ch >= 'a'&&ch  <= 'z')
		return (ch - 96);
	i  (ch<'A' || ch>'z')
		return -1;

}
	

