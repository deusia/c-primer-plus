/*����ߴ�Ӣ�߻�Ϊ����*/
#include<stdio.h>
#include<windows.h>
int main(void)
{
	const float inch = 2.54;//ȡ1 inch=2.54cm
	
	float height;
	printf("Please enter your height in inch:");
	scanf("%f", &height);
	printf("Your height in cetimeter is %f", height*inch);
	system("pause");
	return 0;
}