/*将身高从英尺化为厘米*/
#include<stdio.h>
#include<windows.h>
int main(void)
{
	const float inch = 2.54;//取1 inch=2.54cm
	
	float height;
	printf("Please enter your height in inch:");
	scanf("%f", &height);
	printf("Your height in cetimeter is %f", height*inch);
	system("pause");
	return 0;
}