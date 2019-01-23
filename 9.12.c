#include<stdio.h>
#include<windows.h>
void chline(char ch, int j, int i)
{
	printf("enter line and row:");
	scanf_s("%d%d", &j, &i);
	int a = 0,b=0;
	printf("please enter %d char", i*j);
	while ((ch = getchar()) != '#')
	
		for (a = 0; a < j; a++)
		{
			for (b = 0; b < i; b++) {
				ch = getchar();
					putchar(ch);
			}
			printf("\n");
		 }	
}
int main(void)
{
	int i=0, j=0;
	char ch='a';
	chline(ch, j, i);
	system("pause");
	return 0;
}
