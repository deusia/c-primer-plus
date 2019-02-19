#include<stdio.h>
#include<windows.h>
void copy_arr(double arr[3][5], double copy[3][5]);
int main(void)
{
	double arr[3][5] = {
						{ 1.1,1.2,1.3,1.4,1.5 },
						{ 2.1,2.2,2.3,2.4,2.5 },
						{ 3.1,3.2,3.3,3.4,3.5 }};
	double copy[3][5];
	copy_arr(arr, copy);
	system("pause");
	return 0;
}
void copy_arr(double arr[3][5], double copy[3][5])
{
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 5; k++)
			copy[i][k] = arr[i][k];
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 5; k++)
			printf("%5.1lf", copy[i][k]);
		putchar('\n');
	}
}