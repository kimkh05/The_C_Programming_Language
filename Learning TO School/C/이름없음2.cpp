#pragma warning(disable:4996)
// ���� #6 �ڿ��� A�̻� B���� ��� �Ҽ� ���ϱ� �Լ� ����
// �й� :
// �̸� :
#include <stdio.h>
// �Լ� ���� �κ�
void PrintPrimeNumber(int, int);
int main()
{
	int A, B;
	printf(" �ڿ��� �� �� �Է� : ");
	scanf("%d %d", &A, &B);
	printf(" �Ҽ� ã�� ���\n");
	PrintPrimeNumber(A, B);
	return 0;
}
// �Լ� ���Ǻκ�
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
	// �ۼ����ּ���~!
}
