//the purpose of the programe is to calculate the sqr abd ssqr of the number you put!!!
#include<stdio.h>
#include<windows.h>
#define A "num"//do some fix constant
#define B "sqr"
#define C "ssqr"
int main(void)
{
	int a;
	printf("Please enter a number:");
	scanf_s("%d", &a);
	printf("%-10s%-10s%-10s\n",
		A, B, C);
	int i;
	for (i = 0; i < a; i++)//make the format 
	{
	 	printf("%-10d%-10d%-10d",
	            i, i*i, i*i*i);
		printf("\n");
	}
		system("pause");//retain the comand table
	return 0;
}
