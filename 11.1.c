#include<stdio.h>
#include<windows.h>
char* st_set(char* st_arr);
int main(void)
{
	char arr[40];
	puts(st_set(arr));
	system("pause");
	return 0;
}
char* st_set(char* st_arr)
{
	
	fgets(st_arr, 200, stdin);
	return st_arr;

}