#include<stdio.h>
#include<windows.h>
#define tax_bef300 0.15
#define tax_ove150 0.20
#define tax_left   0.25
#define salary 10//per hour
#define over_basic  1.5//per hour
#define AMT1 300
#define AMT2 150
int main(void)
{
	float tax;
	float tal;
	float tal_pure;
	float time;

	printf("how long you have worked;");
	scanf_s("%f", &time);
	if (time > 40)                    //deal with the time.
		time = 40+ over_basic * (time - 40);
	tal = time * salary;//for the convience
	if (tal <= AMT1) {           //tal<300
		tal_pure = tal * (1 - tax_bef300);
		tax = tal * tax_bef300; 
	}

		else
		    if (tal <= (AMT1 + AMT2)) { //300<tal<450
			tal_pure = AMT1 * (1 - tax_bef300) + (tal - AMT1)*(1 - tax_ove150);
			tax = AMT1 * tax_bef300 + (tal - AMT1)*tax_ove150;
		    }

		else {
			tal_pure = (1 - tax_bef300)*AMT1 + (1 - tax_ove150)*AMT2 + (1 - tax_left)*(tal - AMT1 - AMT2);
			tax = AMT1 * tax_bef300 + AMT2 * tax_ove150 + (tal - AMT1 - AMT2)*tax_left;
	    }

	
	printf("tal=%f,tal_pure=%f,tax=%f",
		tal, tal_pure, tax);
	system("pause");
	return 0;
}
	

