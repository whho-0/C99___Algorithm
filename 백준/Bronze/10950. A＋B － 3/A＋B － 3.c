#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 10950 - A+B-3
int main(void)
{
	int A, B, T;
	scanf("%d", &T);

	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
	return 0;
}