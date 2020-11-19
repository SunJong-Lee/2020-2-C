#include <stdio.h>
#define MAX 5
int main(void)
{
	int n = 1;
	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);
	printf("\n제어변수 => %d\n", n);
	return 0;
}