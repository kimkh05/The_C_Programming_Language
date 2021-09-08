#pragma warning(disable:4996)
#pragma warning(disable:6013)
#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 10
int top = -1;
int arr[STACK_SIZE];
int Empty() {
	if (top == -1) return true; //비어있음
	else return false;//데이터가 있음
} 
int full() {
	if (top == STACK_SIZE - 1) return true;//데이터가 다 참
	else return false;//데이터 빈자리가 있음
}
void push(int n) {
	if (full()) printf("데이터의 빈 공간이 없습니다. 다시 시도해주세요.\n");
	else arr[++top] = n;
}
void pop() {
	if(Empty()) printf("삭제할 값이 없습니다. 다시 시도해주세요.\n");
	else {
		arr[top--] = NULL;
		printf("삭제되었습니다.\n\n");
	}
}
void print() {
	for (int i = 0; i < top+1; i++) {
		printf("[%d] ", arr[i]);
	}
	if(top == -1) {
			printf("비어있습니다.\n");
			return;
		}
	printf("\n\n");
	return;
}
int main() {
	int n;
	int data = 0;
	bool i = true;
	while (i) {
		printf("-메뉴-\n");
		printf("1. 푸쉬  2. 팝  3. 프린트  4. 종료\n");
		printf("원하는 번호를 고르세요. : ");
		scanf("%d", &n);
		switch (n) {
		case 1 :
			printf("넣을 값을 입력해 주세요. : ");
			scanf("%d", &data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3 :
			print();
			break;
		case 4:
			printf("종료되었습니다. \n");
			break;
		default:
			printf("잘못입력하셨습니다. 다시 입력해주세요. \n");
			break;
		}
	}
	return 0;
}
