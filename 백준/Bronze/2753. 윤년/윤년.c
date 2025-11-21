#include <stdio.h>
// 2753 - 윤년
int main(void)
{
	int leapyear;
	scanf("%d", &leapyear);

	if(leapyear%4==0 && (leapyear%100!=0 || leapyear%400==0)) // 괄호 위치 중요
		printf("1");
	
	else
		printf("0");
        
	return 0;

}
