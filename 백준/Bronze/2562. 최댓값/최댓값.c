#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2562 - 최댓값
int main(void)
{
	int arr[9];
	int max=0, count=0;
	
	// 배열 비교하면서 채우기
	for(int i=1; i<=9; i++)
	{
		scanf("%d", &arr[i]); 

		// 0번째에 최댓값이 들어갈 수도 있으니 <=
		if(max<=arr[i])
		{	
			max=arr[i];
			count=i; // max갱신될 때 위치정보 저장
		}
	}
	printf("%d\n%d", max, count);
	return 0;
}
