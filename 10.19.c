#include<stdio.h>
#include<windows.h>
void double_arr(arr[]);
int main(void)
{
	int arr[3][5] = { {1,2,3,4,5,} ,{7,8,9,10,11}, {12,13,14,15,16} };
	double_arr(arr);
	system("pause");
	return 0;
}
void double_arr(arr[])
{
	printf("the array is\n");
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 5; k++)
			printf("%d", arr[i]);
		putchar('\n');
	}
	printf("the process outcome is\n");
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 5; k++)
			printf("%d", arr[i] * 2);
	}

}