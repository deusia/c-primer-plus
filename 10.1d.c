#include<stdio.h>
#include<windows.h>
int row_average(int arr[][5]);
int pick_the_max(int arr[][5]);
int main(void)
{
	static tol_ave;
	int arr[3][5];
	int col = 1;
	int ass = 1;
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 5; k++,ass++)
			arr[i][k] = ass;
	while (col <= 3)
	{
		int copy;
		printf("the average of row_%d is %d\n"
			, col, copy=row_average(arr));
		col++;
		tol_ave += copy;
	}
	putchar('\n');
		printf("the toltal average is %d", tol_ave);

		printf("the max value of the arrar is %d", pick_the_max(arr));
		system("pause");
		return 0;
}
int row_average(int arr[3][5])//process the average value of every row
{
	static row=0;
	int ave_value=0;
	for (int c = 0; c < 5; c++)
		ave_value += arr[row][c];
	row++;
	return ave_value / 5;
}
int pick_the_max(int arr[][5])
{
	int max=arr[0][0];
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 5; k++)
			if (max < arr[i][k])
				max = arr[i][k];
	return max;
}