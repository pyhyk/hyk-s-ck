#include <stdio.h>
int main(void)
{
    int i = 0;
    while (i < 100)
    {
        if (i%2 == 1)
            printf("%d\n", i);
        i++;
    }
    return 0;
}