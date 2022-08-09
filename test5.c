#include <stdio.h>
void one_three(void);   
int main(void)
{
	printf("starting now:\n");
		one_three();
		printf("done!");

	return 0;
}
void two(void);/*声明只需在被调用前使用如：
			   此处two()函数只在one_three函数处被调用，
			   而main函数处仅调用one_three  故只需在此处声明（个人总结）*/
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