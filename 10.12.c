#include<stdio.h>
#include<windows.h>
void copy_arr(double source[],double target1[],int num);
void copy_ptr(double* source,double* target2,int num);
void copy_ptrs(double*, double*, double*);
int main(void)
{
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5] = { 0 };
	double target2[5] = { 0 };
	double target3[5] = { 0 };
	//build the basic portion

	copy_arr(source,target1,5);//the expresion of array
	putchar('\n');
	copy_ptr(source,target2,5);//the expresion of pointer
	putchar('\n');
	copy_ptrs(target3, source, source + 5);//the sxpresion of names and pointers

	system("pause");
	return 0;
}
void copy_arr(double source[], double target1[],int num)
{
	int i;
	for (i = 0; i < num; i++) {
		target1[i] = source[i];
		printf("%5.1lf", source[i]);
	}
}
void copy_ptr(double* source, double* target2,int num)
{
	int i;
	for (i = 0; i < num; i++) {
		*(target2 + i) = *(source + i);
		printf("%5.1lf", *(target2+i));
	}
}
void copy_ptrs(double* source, double* target3, double* source_5)
{
	double* i;
	for (i = source; i < source_5; i++) {
		*target3 = *i;
		target3++;
	}
	int t;
	for(t=0;t<5;t++)
		printf("%5.1lf", *(target3+t));
	
}