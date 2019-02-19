#include<stdio.h>
#include<windows.h>
#define SIZE 5
int main(void)
{
	char ar[SIZE];
	int i;
	printf("Here  i will put the word\n");
	for (i = 0; i < 5; i++)
		scanf_s("%c", &ar[i]);
	printf("Her is the word:");
	for (i = 4; i > -1; i--)
		printf("%c", ar[i]);
	system("pause");
	return 0;
}

