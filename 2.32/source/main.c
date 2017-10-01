#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	float b;
	float c;

	printf("請輸入體重、身高\n");
	scanf_s("%f%f", &a, &b);

	c = a / (b*b);

	printf("BMI= %f\n", c);

	if (c < 18.5)
	{
		printf("Underweight\n");
	}
	if (c >= 18.5 & c <= 24.9)
	{
	
	printf("Normal\n");
    }
	if (c >= 25 & c < 29.9)
	{
		printf("Overweight\n");
	}
	if (c > 30)
	{
		printf("Obese\n");
	}

	system("pause");
	return 0;
	




}