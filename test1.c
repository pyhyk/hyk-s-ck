#include <stdio.h>
/*��������*/
char deny(void);/*����������Ӧ��";"*/
char jolly(void);
/*������*/
int main(void)//�κκ�������main������ʼ�����庯�����ڱ�����ʱִ��
{jolly();
jolly();
jolly();deny();
	return 0;
}
char deny(void)//char or void �����ԣ�ͬ16�У���int�Ȳ��У���������Ϊ�ַ�����
{
	printf("Which nobody can deny!");
}
char jolly(void)
{
	printf("For he's a jolly fellow.\n");
}