#define _CRT_SECURE_NO_WARNINGS
#define MAX 101
#include <stdio.h>
// 10813 - 공 바꾸기
// 처음에는 바구니에 적혀있는 번호와 같은 번호가 적힌 공이 들어있다. 
// => 반복문 진입 전의 초기 배열 상태는 바구니랑 공 번호 같다는 것. 반복문 진입 이후에는 바뀌니까
int main(void)
{
    int N, M, tmp=0; // 바구니 갯수, 교환 방법 갯수
    int i, j;
    int basket[MAX]={0,};
    scanf("%d %d", &N, &M);
    
    // 바구니 번호 == 공 번호대로 넣어주는 과정
    for(int b=1; b<=N; b++)
        basket[b]=b;

    // swap 과정
    for(int cnt=1; cnt<=M; cnt++)
    {
        scanf("%d %d", &i, &j);
        
        tmp = basket[i]; 
        basket[i] = basket[j];
        basket[j] = tmp;
    }

    // swap 결과 출력
    for(int cnt=1; cnt<=N; cnt++)
        printf("%d ", basket[cnt]);
	
    return 0;
}