#include<stdio.h>
#include<windows.h>
void double_arr(int arr[][5]);
int main(void)
{
	int arr[3][5] = { {1,2,3,4,5,} ,{7,8,9,10,11}, {12,13,14,15,16} };
	double_arr(arr);
	system("pause");
	return 0;
}
void double_arr(int arr[][5])
{
	printf("the array is\n");
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 5; k++)
			printf("%5d", arr[i][k]);
		putchar('\n');
	}
	printf("the process outcome is\n");
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 5; k++)
			printf("%5d", arr[i][k] * 2);
		putchar('\n');
	}

}