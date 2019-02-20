#include<stdio.h>
#include<string.h.>
#include<windows.h>
#define LEN 5
char* mystrncpy(char*, char*, unsigned);
int main(void)
{
	char* receive;
	char s1[LEN];
	char s2[LEN];
	printf("Enter a string:");
	for (int i = 0; i < LEN; i++)
	{
		s1[i] = getchar();
		if (s1[i] == '\n') {
			s1[i] = '\0';
			s1[i + 1] = '\n';
			break;
		}
	}
	printf("Now enter another string:");
	for (int i = 0; i < LEN; i++)
	{
		s2[i] = getchar();
		if (s2[i] == '\n') {
				s2[i] = '\0';
				s2[i + 1] = '\n';
				break;
			
		}
	}
		printf("The length of s1 is %d\n", strlen(s1));
		printf("The length of s2 is %d\n", strlen(s2));
		puts(s1);
		puts(s2);
		printf("The new string is ");
		receive = mystrncpy(s1, s2, LEN);
		puts(receive);
		system("pause");
		return 0;
}
char* mystrncpy(char* s1, char* s2, unsigned n)
	{
	unsigned len_1 = strlen(s1);
	unsigned len_2 = strlen(s2);
		if (strlen(s2)<n)
			for (unsigned int i = 0; i <= len_2; i++)
				s1[len_1 + i] = s2[i];
		else
		{
			for (unsigned int k = 0; k < n; k++)
				s1[len_1 + k] = s2[k];
			s1[len_1] = '\0';
		}
		return s1;
	}