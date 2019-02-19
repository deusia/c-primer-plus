#include<stdio.h>
#include<windows.h>
int main(void)
{
	float bow = 100;
	static int year = 1;
	double Daphne = 100, Deirdre = 100;
	do
	{
		Daphne +=0.1*bow;
		Deirdre = 1.05*Deirdre;
		year++;
	} while (Daphne > Deirdre);
	printf("Daohne:%lf", Daphne);
	printf("\nDeirdre:%lf", Deirdre);
	printf("\nyear:%d", year - 1);

	system("pause");
	return 0;
}