#pragma warning(disable:4996)
#pragma warning(disable:6013)
#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 10
int top = -1;
int arr[STACK_SIZE];
int Empty() {
	if (top == -1) return true; //�������
	else return false;//�����Ͱ� ����
} 
int full() {
	if (top == STACK_SIZE - 1) return true;//�����Ͱ� �� ��
	else return false;//������ ���ڸ��� ����
}
void push(int n) {
	if (full()) printf("�������� �� ������ �����ϴ�. �ٽ� �õ����ּ���.\n");
	else arr[++top] = n;
}
void pop() {
	if(Empty()) printf("������ ���� �����ϴ�. �ٽ� �õ����ּ���.\n");
	else {
		arr[top--] = NULL;
		printf("�����Ǿ����ϴ�.\n\n");
	}
}
void print() {
	for (int i = 0; i < top+1; i++) {
		printf("[%d] ", arr[i]);
	}
	if(top == -1) {
			printf("����ֽ��ϴ�.\n");
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
		printf("-�޴�-\n");
		printf("1. Ǫ��  2. ��  3. ����Ʈ  4. ����\n");
		printf("���ϴ� ��ȣ�� ������. : ");
		scanf("%d", &n);
		switch (n) {
		case 1 :
			printf("���� ���� �Է��� �ּ���. : ");
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
			printf("����Ǿ����ϴ�. \n");
			break;
		default:
			printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���. \n");
			break;
		}
	}
	return 0;
}
