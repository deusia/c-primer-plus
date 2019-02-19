#include<stdio.h>
#include<windows.h>
#define SIZE 5
float calcu(float,float);
int main(void)
{
	float na, nb;
	printf("Please put two numbers:");
	while (scanf_s("%f%f", &na, &nb) == 2)
		printf("the outcome is %f", calcu(na, nb));
	printf("bye");
	system("pause");
	return 0;
}
float calcu(float c,float d)
{
	float cal;
	cal = (c - d) / (c*d);
	return cal;
}

