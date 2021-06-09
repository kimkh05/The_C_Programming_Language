#pragma warning(disable:4996)
#include <stdio.h>
struct information {
	char name[20] = { 0, };
	int number = 0;
};
int numbers() {
	int a = 0;
	printf("입력 회원 수 : ");
	scanf("%d", &a);
	printf("%d 명 회원정보 입력\n", a);
	return a;
}
void name(char name1[20], int *num) {
	scanf("%d %s", &*num, name1);
}
int main()
{
	struct information n1[100];
	int n = 0;
	n = numbers();
	for (int i = 0; i < n; i++) {
		printf("%d : ", i + 1);
		name(n1[i].name, &n1[i].number);
	}
	printf("%d 명 회원정보 출력\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d : %d %s\n", i + 1, n1[i].number, n1[i].name);
	}
	return 0;
}
