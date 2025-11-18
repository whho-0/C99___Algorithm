#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
// 곱셈
int main(void)
{
    int num1, num2, result=0;
    int s1, s2, s3;
    scanf("%d%d", &num1, &num2);

    s1 = num1 * (num2 % 10);  // (3) a * b의 일의 자리 -> 385를 100으로 나눈 몫은 3이다.
    s2 = num1 * (num2 % 100 / 10);  // (4) a * b의 십의 자리 -> 385를 100으로 나눈 나머지 82인데 여기서 8은 10으로 나눈 몫이다.
    s3 = num1 * (num2 / 100);  // (5) a * b의 백의 자리 -> 385를 10으로 나눈 나머지
    
    result = s1 + (s2* 10) + (s3 * 100);

    printf("%d\n%d\n%d\n%d", s1, s2, s3, result);
    return 0;
}