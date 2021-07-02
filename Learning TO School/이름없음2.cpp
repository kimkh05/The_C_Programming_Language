#pragma warning(disable:4996)
// 수행 #6 자연수 A이상 B이하 모든 소수 구하기 함수 구현
// 학번 :
// 이름 :
#include <stdio.h>
// 함수 선언 부분
void PrintPrimeNumber(int, int);
int main()
{
	int A, B;
	printf(" 자연수 두 개 입력 : ");
	scanf("%d %d", &A, &B);
	printf(" 소수 찾기 결과\n");
	PrintPrimeNumber(A, B);
	return 0;
}
// 함수 정의부분
void PrintPrimeNumber(int A, int B)
{
	for (int i = A; i < B; i++) {
		if (i == 2) {
			printf("%d ", i);
			continue;
		}
		if (i == 3) {
			printf("%d ", i);
			continue;
		}
		if (i == 5) {
			printf("%d ", i);
			continue;
		}
		if (i == 7) {
			printf("%d ", i);
			continue;
		}
		
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i != 1) { 
			if(i % 7 != 0) printf("%d ", i);
		}
		else { 
			continue;
		}
		
	}
	// 작성해주세요~!
}
