#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a,b,c,d,e,f;

	printf("�@��Ѫ��`���{��");
	scanf_s("%d", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�");
	scanf_s("%d", &b);
	printf("�����@����/�[�گ��p�h�֤���");
	scanf_s("%d", &c);
	printf("�@�Ѫ������O");
	scanf_s("%d", &d);
	printf("�@�Ѫ��q��O(�L���O)");
	scanf_s("%d", &e);
	f = (a / c) * b  + d + e ;

	printf("�@�ѤU�Ӷ}���h�u�@����O:%d", f);

	 

	system("pause");
	return 0;


}