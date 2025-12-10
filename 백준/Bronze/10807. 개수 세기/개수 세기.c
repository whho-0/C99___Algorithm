#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 10807 - 개수 세기
int main(void)
{
	int N, find, count;
	scanf("%d", &N);

	int arr[N];

	// 배열에 elememt 하나씩 넣기
	for(int i=0; i<N; i++)
		scanf("%d", &arr[i]);
		

	// 하나씩 돌면서 찾는 문자 있으면 count증가
	scanf("%d", &find);
	for(int i=0; i<N; i++)
		if(find==arr[i])
		count++;
	
	// 찾는 원소 갯수 출력
	printf("%d", count);
	
	return 0;	
}