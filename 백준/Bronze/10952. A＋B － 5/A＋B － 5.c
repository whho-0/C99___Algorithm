#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 10952 - A+B-5

int main(void)
{
	int A, B;

	while(1)
	{
		scanf("%d %d", &A, &B);
		if(A!=0 && B!=0)	
			printf("%d\n", A+B);
		
		else
			break;	
	}
	return 0;
}