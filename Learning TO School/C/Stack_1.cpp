#pragma warning(disable:4996)
#pragma warning(disable:6013)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr[10]; // 스택의 크기 : 10 
int top = -1; // 기본 스택의 top의 값은 -1 
void push(int n) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == NULL) { // 빈 값이 있을 떄
			arr[i] = n;
			top = i - 1;
			printf("%d를 삽입하였습니다.\n", n);
			return;
		}
		else if (i==9) { // 빈 값이 없을 때
			printf("스택에서의 빈 부분이 없습니다.\n");
			return;
		}
	}
}// 넣어주는 함수 
void pop() {
	int temp;
	if (arr[top + 1] == NULL || top < -1) printf("잘못입력하셨습니다.\n"); // 빈값에 pop을 했을때  
	else {
		temp = arr[top + 1];
		arr[top + 1] = NULL;
		printf("%d 삭제되었습니다. \n", temp);
		top--;
		return;
	}
	return;
}// 지워주는 함수 
void print() {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == NULL) break; // 빈 값일때 출력 X 
		else printf("[%d] ", arr[i]); // 빈 값이 아닐 때 출력 
	}
	printf("\n\n");
	return;
}//출력하는 함수 
int main() {
	int n;
	int num;
	while (1) {
		printf("1. 삽입 | 2. 삭제 | 3. 출력 | 4. 종료\n");
		printf("원하는 번호를 입력해주세요(1~4까지의 숫자에서만) : ");
		scanf("%d", &n);
		if (n == 1) { // n = 1
			printf("원하는 숫자를 입력해주세요.\n");
			scanf("%d", &num);
			push(num);
		}
		else if (n == 2) { // n = 2
			pop();
		}
		else if (n == 3) print(); // n = 3
		else if (n == 4) break;// n = 4
		else printf("잘못입력하셨습니다. 다시 입력해주세요.\n"); // n != 1, 2, 3, 4
	}
	return 0;
}
