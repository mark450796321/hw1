#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("��J��ӼƦr");
	scanf_s("%d%d", &a,&b);
	c = a % b;
	if (c  == 0 )
		printf("%d �O%d������", a, b);
	else
	
		printf("%d ���O%d������", a, b);

	system("pause");
	return 0;







}