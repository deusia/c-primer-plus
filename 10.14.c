#include<stdio.h>
#include<windows.h>
int pick_the_max(int arr[], int num);
int main(void)
{
	int arr[5];
	printf("please enter five number:");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	printf("the max is %d", pick_the_max(arr, 5));
	system("pause");
	return 0;
}
int pick_the_max(int arr[], int num)
{
	int comp_num = arr[0];
	int sign_down=0;
	for (int i = 1; i < num; i++)
		if (comp_num < arr[i])
			comp_num = arr[i];
	for (int i = 0; i < num; i++)
		if (comp_num == arr[i])
			sign_down = i;
	return sign_down;
}