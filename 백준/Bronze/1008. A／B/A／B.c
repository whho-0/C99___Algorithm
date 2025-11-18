#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;
	double div;

	scanf("%d %d", &A, &B);

	div = (double)A / (double)B;
	printf("%.9lf", div);

	return 0;
}