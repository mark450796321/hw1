#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("輸入兩個數字");
	scanf_s("%d%d", &a,&b);
	c = a % b;
	if (c  == 0 )
		printf("%d 是%d的倍數", a, b);
	else
	
		printf("%d 不是%d的倍數", a, b);

	system("pause");
	return 0;







}