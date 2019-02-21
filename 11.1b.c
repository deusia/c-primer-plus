#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdbool.h>
#define LEN 20
#define ROW 10
void function_first(char[][LEN]);
void function_second(char[][LEN]);
void function_third(char [][LEN]);
void function_fourth(char[][LEN]);
char* s_gets(char* str, int n);

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
		if (ROW - 1 == i)
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
	puts(" 4)  print all the strings according to the first word. ");
	puts(" 5)  exit.");
	printf("*********************************************\n");
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
	//part three  *option part

	puts("Done!");
	system("pause");
	return 0;
}
//part four  *function design
void function_first(char str[][LEN])////////////////////////////
{
	int count = 1;
	const char(*pt)[LEN] = str;           //way 1
	for (int i = 0; i < ROW; i++)
		printf("%3d)  %s\n", count + i, pt + i);
	printf("Please Enter next number or Enter 5 to EXIT:");
}
void function_second(char str[][LEN])
{

}
void function_third(char str[][LEN])
{
	int count = 1;
	char* queue[ROW];
	char* temp;
	for (int j = 0; j < ROW; j++)
		queue[j] = str + j;

	for(int i=0;i<ROW-1;i++)
		for (int k = 1; k < ROW; k++)
			if (strlen(str + i) < strlen(str + k))
			{
				*temp = *queue[i];
				*queue[i] = *queue[k];
				*queue[k] = *temp;
			}
		
	for (int c = 0; c < ROW; c++)
		printf("%3d)  %s\n", count + c,queue[c] );
	printf("Please Enter next number or Enter 5 to EXIT:");
}
void function_fourth(char str[][LEN])
{
	int count = 1;
	char* pt[ROW];
	for (int i = 0; i < ROW; i++)     //way 2 ::the second way
		pt[i] = str[i];               //to read string in the two-dimensional array

	for (int c = 0; c < ROW; c++)
		printf("%3d)  %c\n", count + c, str[c][0]);
	printf("Please Enter next number or Enter 5 to EXIT:");
}
char* s_gets(char* str, int n)
{
	char* ret_val;
	int i = 0;

	ret_val = fgets(str, n, stdin);
	if (ret_val)
	{
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		if (str[i] == '\n')
			str[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}