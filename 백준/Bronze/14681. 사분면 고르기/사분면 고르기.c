#include <stdio.h>
// 14681 - 사분면 고르기
int main(void)
{
	int x, y, quadrant;
	scanf("%d %d", &x, &y);

	// 제 1사분면 (+,+)
	if(x>0 && y>0)
		printf("1");

	// 제 2사분면 (-,+)
	if(x<0 && y>0)
		printf("2");

	// 제 3사분면 (-,-)
	if(x<0 && y<0)
		printf("3");

	// 제 4사분면 (+,-)
	if(x>0 && y<0)
		printf("4");

	return 0;
}