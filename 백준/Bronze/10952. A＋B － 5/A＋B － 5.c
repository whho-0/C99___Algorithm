#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 10952 - A+B-5
int main(void)
{
	int A, B;

	while(1)
	{
		// 조건문 밖에 있어야 0 0 들어왔을 때, 출력 안 함
		scanf("%d %d", &A, &B);
	
		if(A!=0 && B!=0)	
			printf("%d\n", A+B);
		
		else
			break;	
	}
	return 0;
}

/* 실수
while(A!=0 && B!=0)
{
    scanf("%d %d", &A, &B); 
    printf("%d\n", A+B);	
}

이렇게 while문 조건에 둘 다 0이 아닐 때라고 하면, 
애초부터 초기화 하지 않은 값을 써서 최악의 경우 바로 종료될 수 있다.

또한, 입력이 반복문 안에 있기 때문에 일단 들어가고 0 0이 입력되었을 때 0을 출력하고
그 다음에 반복문 조건 검사했을 때 조건 미충족이 되어 반복문 실행이 종료된다.

이러면 우리가 원하는 0 0 이 입력되었을 때 즉시 프로그램 종료하지 않기에 틀린 것임.
*/
