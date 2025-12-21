#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 10818 - 최소, 최대
int main(void)
{
	int N;
	int max, min;

	scanf("%d", &N);
	int arr[N];

	// 배열 채우기
	for(int i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	// 배열 돌면서 max값 갱신
	for(int j=1; j<N; j++)
	{
		// 현재 요소가 max보다 크면 max갱신
		if(arr[j]>max)
		{
			max = arr[j];
		}

		// 현재 요소가 max보다 작으면, 이전 min과 비교하고 그거보다 더 작은 게 들어왔으면 min갱신
		else
		{
			if(min>=arr[j])
				min = arr[j];
		}
	}
	printf("%d %d", min, max);
	return 0;
}