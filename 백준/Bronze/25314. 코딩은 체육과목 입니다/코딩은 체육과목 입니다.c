#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 25314 - 코딩은 체육과목 입니다.
int main(void)
{
	int N;
	scanf("%d", &N);
	N /= 4;

	for(int i=1; i<=N; i++)
	{
		printf("long ");
	}
	
	printf("int");
	return 0;
}