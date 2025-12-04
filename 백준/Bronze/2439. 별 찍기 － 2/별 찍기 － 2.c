#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2439 - 별 찍기 - 2
int main(void)
{
	int height; 		 // 트리의 높이
	int star=1, count=1; // 별의 갯수, 루프 카운터
	scanf("%d", &height);

	// 트리의 높이만큼 출력
	while(star <= height)
	{
		count = 1;
		// (높이-별 갯수)만큼 공백 출력
		while(count <= (height-star))
		{
			printf(" ");
			count++; // 반복 횟수
		}

		// 공백 한줄 끝나고 여기 들어와서 별 갯수만큼 * 출력
		count = 1;
		while(count <= star)
		{
			printf("*");
			count++;
		}

		printf("\n");
		star++;
	}
	return 0;
}