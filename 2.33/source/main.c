#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a,b,c,d,e,f;

	printf("一整天的總里程數");
	scanf_s("%d", &a);
	printf("汽油一公升/加侖多少錢");
	scanf_s("%d", &b);
	printf("平均一公升/加侖能行駛多少公里");
	scanf_s("%d", &c);
	printf("一天的停車費");
	scanf_s("%d", &d);
	printf("一天的通行費(過路費)");
	scanf_s("%d", &e);
	f = (a / c) * b  + d + e ;

	printf("一天下來開車去工作的花費:%d", f);

	 

	system("pause");
	return 0;


}