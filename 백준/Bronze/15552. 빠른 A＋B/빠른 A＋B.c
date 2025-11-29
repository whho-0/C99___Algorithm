#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 15552 - 빠른 A+B

scanf와 printf는 다른 언어에 비해 '입출력 실행 속도'가 빠른 편에 속하기에 시간 단축 명령어 고려 X
입력 속도 비교 레퍼런스 : https://www.acmicpc.net/blog/view/56

*/

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
