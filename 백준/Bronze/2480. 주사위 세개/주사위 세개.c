#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2480 - 주사위 세개
int main(void)
{
	int a, b, c;
	int max, prize=0;
	scanf("%d %d %d", &a, &b, &c);

	// 3개 모두 같은 경우 (a==b==c 이렇게 X)
	if(a==b && b==c){
		prize = 10000 + (a * 1000);
	}

	// 2개가 같은 경우
	else if(a==b)
		prize = 1000 + a * 100;

	else if(c==a)
		prize = 1000 + a * 100;

	else if(b==c)
		prize = 1000 + b * 100;


	// 모두 다를 경우 (제일 큰 값 고르기)
	else
	{
		max = a;
		if(max < b) 
			max = b;
		
		if(max < c) 
			max = c;
		
		prize = max * 100;
	}
	printf("%d", prize);
	return 0;
}