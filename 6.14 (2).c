#include<stdio.h>
#include<windows.h>
#define SIZE 8
int main(void)
{
	int ar1[SIZE], ar2[SIZE];
	int i,j;
	for (i = 0; i < 8; i++)
		scanf_s("%d", &ar1[i]);
	ar2[0] = ar1[0];
	for (j = 1; j < 8; j++)
		ar2[j] = ar2[j-1] + ar2[j];
		for(i=0;i<8;i++)
		printf("%5d",ar2[i]);
		system("pause");
	return 0;
}
#include<stdio.h>
#include<windows.h>
#define SIZE 8
int main(void)
{
	double ar1[SIZE], ar2[SIZE];
    int i;
	int j;
	int k;
	for (i = 0; i < 8; i++)
		scanf_s("%lf", ar1+i);
	ar2[0] = ar1[0];
	for (j = 1; j < SIZE; j++)
		ar2[j] = ar2[j - 1] + ar1[j];
	for (k= 0; k< SIZE; k++)
		printf("%5.1lf", ar2[k]);
	system("pause");
	return 0;
}