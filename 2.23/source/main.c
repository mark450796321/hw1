#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("請輸入3個整數");

	scanf("%d%d%d", &a, &b, &c);

	if (a >= b >= c)
		printf("max is %d,min is %d\n", a, c);
	else if (c >= b >= a)
		printf("max is %d,min is %d\n", c, a);
	else if (c >= a >= b)
		printf("max is %d,min is %d\n", c, b);
	else if (a >= c >= b)
		printf("max is %d,min is %d\n", a, b);
	else if (b >= a >= c)
		printf("max is %d,min is %d\n", b, c);
	else if (b >= c >= a)
		printf("max is %d,min is %d\n", b, a);
	else if (a = b = c)
		printf("max is %d, min is %d\n", a, c);

	
	
	

	system("pause");
	return 0;

}