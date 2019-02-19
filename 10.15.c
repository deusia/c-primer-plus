#include<stdio.h>
#include<windows.h>
void pick_the_max(int arr[], int num);
int main(void)
{
	int arr[5];
	printf("please enter five number:");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	pick_the_max(arr, 5));
	system("pause");
	return 0;
}
void pick_the_max(int arr[], int num)
{
	int* arr_turn[num];
	for (int i = 0; i < 5; i++)
		arr_turn[4-i] = &arr[i];
	int arr_copy[num];
	for (int i = 0; i < 5; i++) 
		arr_copy[i] = *(arr_turn + i);
	for (int i = 0; i < 5; i++)
		printf("the order is %d", &arr_copy[i]);
	
}