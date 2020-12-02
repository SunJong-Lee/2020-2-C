#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getsum(int); //함수원형
int main(void)
{
	int max = 0;
	printf("1에서 n까지의 합을 구할 n을 입력하시오. >> ");
	scanf("%d", &max);
	printf("10||A %d7}X|2] : %d\n", max, getsum(max)); //함수호출
	return 0;
}
int getsum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}