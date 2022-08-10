//指数增长
#include <stdio.h>
#define squares 64  //棋盘方格数
int main(void)
{
	const double crop = 2E16;
	double current, total;
	int count = 1;

	printf("square    grains    total    ");
	printf("fraction of \n");
	printf("          added     grains    worldtotal\n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / crop);

	while (count < squares)
	{
		count++;
		current =current * 2.0;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / crop);
	}
	printf("That's all.");
	return 0;
}