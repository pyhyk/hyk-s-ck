#include <stdio.h>
void one_three(void);   
int main(void)
{
	printf("starting now:\n");
		one_three();
		printf("done!");

	return 0;
}
void two(void);/*����ֻ���ڱ�����ǰʹ���磺
			   �˴�two()����ֻ��one_three�����������ã�
			   ��main������������one_three  ��ֻ���ڴ˴������������ܽᣩ*/
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}