#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 15552 - 빠른 A+B
int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}

	return 0;
}