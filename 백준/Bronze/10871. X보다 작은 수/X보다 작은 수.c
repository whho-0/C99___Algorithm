#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 10871 - X보다 작은 수
int main(void)
{
	int N, X;
	scanf("%d %d", &N, &X);
	int A[N];

	// 하나씩 돌면서 A[i]가 X보다 작은 것들만 출력
	for(int i=0; i<N; i++)
	{
		scanf("%d", &A[i]);
		
		if(X>A[i])
			printf("%d ", A[i]);
	}
	return 0;
}