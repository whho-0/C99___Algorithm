#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 8393 - 합
int main(void)
{
	int X, N, a, b, sum=0;
	scanf("%d", &X); // 영수증에 적힌 총 금액
	scanf("%d", &N); // 구매한 물건 종류의 수 

	// 물건의 가격(a) & 갯수(b)
	for(int i=1; i<=N; i++)
	{
		scanf("%d %d", &a, &b);
		sum += (a*b);
	}

	if(X==sum)
		printf("Yes");

	else
		printf("No");
		
	return 0;
}