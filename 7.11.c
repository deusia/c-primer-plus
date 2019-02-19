#include<stdio.h>
#include<ctype.h>
#include<windows.h>
int main(void)
{
	char ch;
	int sp=0;
	int nl=0;
	int hc=0;

	while ((ch=getchar()) != '#')//PLEASE BE CARE OF THE"=="!!!!!!!!!
	{                             //!!!!!!!!!!!!!!!!!
		if (ch == ' ')     sp++;
		if (ch=='\n')   nl++;
	    if (ch>='a'&&ch<='z')   hc++;
	}
	printf("sp=%d,nl=%d,hc=%d.",
		sp, nl, hc);
	system("pause");
	return 0;
}