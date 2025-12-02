#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 11021 - A+B-7
int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n",i, A+B);
	}

	return 0;
}