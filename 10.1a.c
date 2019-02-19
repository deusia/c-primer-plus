#include<stdio.h>
#include<windows.h>
void plus_arr(int ar1[], int ar2[], int ar3[], int);
int main(void)
{
	int arr1[4] = {2,4,5,8};
	int arr2[4] = {1,0,4,6};
	int arr3[4] = { 0 };
	plus_arr(arr1, arr2, arr3, 4);
	for (int i = 0; i < 4; i++)
		printf("%5d", arr3[i]);
	system("pause");
	return 0;
}
void plus_arr(int arr1[], int arr2[], int arr3[], int num)
{
	for (int i = 0; i < num; i++)
		arr3[i] = arr1[i] + arr2[i];
}
