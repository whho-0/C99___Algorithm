#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2438 - 별 찍기 - 1
int main(void)
{
	int height;
	int i=0, j=0;
	scanf("%d", &height);

	while(i<height)
	{
		while(j<=i)
		{
			printf("*");
			j++;
		}
		// j를 누적하지 않고 초기화를 해줘야 다음 반복문에서 i와의 차이만큼 출력 가능
		j=0; 
		
		printf("\n");
		i++;
	}
	return 0;
}

/*

int main(void)
{
	int height;
	int i=0, j=0;
	scanf("%d", &height);

	while(i<height)
	{
		// 외부 반복문에서 따로 *을 출력하고 싶을 때 조건 설정
		while(j<i)
		{
			printf("*");
			j++;
		}
		// j를 누적하지 않고 초기화를 해줘야 다음 반복문에서 i와의 차이만큼 출력 가능
		j=0; 

		printf("* \n");
		i++;
	}
	return 0;
}

*/