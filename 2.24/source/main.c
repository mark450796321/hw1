#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int b;
	int a;

	printf("�п�J�@�ӼƦr");
	scanf_s("%d", &a);

	b = a % 2;

	if (b == 0)
		printf("%d is even\n", a);
	if (b == 1)
		printf("%d is odd\n", a);



	system("pause");
	return 0;
}