#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdbool.h>
#define LEN 20
#define ROW 10
void function_first(char [][LEN]);
void function_second(char [][LEN]);
void function_third(char [][LEN]);
void function_fourth(char [][LEN]);
int main(void)
{
	int command;
	unsigned int exit = false;
	char str[ROW][LEN];
	printf("Now you need to enter ten strings.\n");
	printf("Enter a string:");
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < LEN; k++)
		{
			str[i][k] = getchar();
			if (str[i][k] == '\n')
			{
				str[i][k] = '\0';
				break;
			}
		}
		if (ROW-1 == i)
			continue;
		else
		printf("Enter next string:");
	}
//part one  *assign task

	printf("*********************************************\n");
	printf("Here comes the command.\n");
	puts(" 1)  print all the strings.");
	puts(" 2)  print all the strings obey the order of ASCII.");
	puts(" 3)  print all the strings according to lenth.");
	puts(" 4)  print all the strings according to the first character. ");
	puts(" 5)  exit.");
//part two  *order print  
	//okkokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokokok
	printf("Please enter a number:");
	while (scanf_s("%d", &command) == 1) 
	{
		switch (command)
		{
		case 1:///////////////////////////complete!!!!!!!!!
			function_first(str);
			break;
		case 2:
			function_second(str);
			break;
		case 3:
			function_third(str);
			break;
		case 4:
			function_fourth(str);
			break;
		case 5:///////////////////////////complete!!!!!!!!!
			exit = true;
			break;
		}
		if (exit)
			break;
	}
	printf("*********************************************\n");
//part three  *option part

	puts("Done!");
	system("pause");
	return 0;
}
void function_first(char str[][LEN])////////////////////////////
{
	int count = 1;
	const char(*pt)[LEN]=str;
	for (int i = 0; i < ROW; i++)
		printf("%3d)  %s\n",count+i ,pt+i);
	printf("Please Enter next number or Enter 5 to EXIT:");
}
void function_second(char str[][LEN])
{

}
void function_third(char str[][LEN])
{

}
void function_fourth(char str[][LEN])
{
	int count = 1;
	char* change;
	char* queue[ROW];
	for (int i = 0; i < ROW; i++)
		queue[i] = &str[i][0];

	for (int j = 0; j < ROW - 1; j++) {
		for (int k = 1; k < ROW; k++)
			if (*queue[j] < *queue[k])
			{
				change = queue[k];
				queue[k] = queue[j];
				queue[j] = change;
			}
	}
	for (int c = 0; c < ROW; c++)
		printf("%3d)  %c\n", count + c, *queue[c]);
	printf("Please Enter next number or Enter 5 to EXIT:");
}