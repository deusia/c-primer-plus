#include<stdio.h>
#include<windows.h>
void chline(char ch, int j, int i)
{
	pritnf("enter line and row:");
	scanf("%d%d", &j, &i);
	int a=0, b=0;
	printf("please enter %d char",i*j);
	while ((ch = getchar()) != '#')
	{
		a++;
		if (a%j == 0)
			printf("\n");
		putchar(ch);
	}

}
int main(void)
{
	int i, j;
	char ch;
	chline(ch, j, i);
	system("pause");
	return 0;
}
