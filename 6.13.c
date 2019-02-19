#include<stdio.h>
#include<windows.h>
int main(void)
{
	int ar[8];
	int i=0, n=0;
	for (i = 0; i < 8; i++)
	{
		static s = 2;
		ar[i] = s;
		s = s * 2;
	}
		do
	{
		printf("%6d", ar[n]);
		n++;
		} while (n <=7);
		system("pause");
	return 0;
}