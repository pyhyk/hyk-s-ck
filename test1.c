#include <stdio.h>
/*函数声明*/
char deny(void);/*函数声明后应加";"*/
char jolly(void);
/*主函数*/
int main(void)//任何函数都从main函数开始被定义函数仅在被调用时执行
{jolly();
jolly();
jolly();deny();
	return 0;
}
char deny(void)//char or void 都可以（同16行），int等不行，因函数主体为字符串。
{
	printf("Which nobody can deny!");
}
char jolly(void)
{
	printf("For he's a jolly fellow.\n");
}