#pragma warning(disable:4996)
#pragma warning(disable:6013)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr[10]; // ������ ũ�� : 10 
int top = -1; // �⺻ ������ top�� ���� -1 
void push(int n) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == NULL) { // �� ���� ���� ��
			arr[i] = n;
			top = i - 1;
			printf("%d�� �����Ͽ����ϴ�.\n", n);
			return;
		}
		else if (i==9) { // �� ���� ���� ��
			printf("���ÿ����� �� �κ��� �����ϴ�.\n");
			return;
		}
	}
}// �־��ִ� �Լ� 
void pop() {
	int temp;
	if (arr[top + 1] == NULL || top < -1) printf("�߸��Է��ϼ̽��ϴ�.\n"); // �󰪿� pop�� ������  
	else {
		temp = arr[top + 1];
		arr[top + 1] = NULL;
		printf("%d �����Ǿ����ϴ�. \n", temp);
		top--;
		return;
	}
	return;
}// �����ִ� �Լ� 
void print() {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == NULL) break; // �� ���϶� ��� X 
		else printf("[%d] ", arr[i]); // �� ���� �ƴ� �� ��� 
	}
	printf("\n\n");
	return;
}//����ϴ� �Լ� 
int main() {
	int n;
	int num;
	while (1) {
		printf("1. ���� | 2. ���� | 3. ��� | 4. ����\n");
		printf("���ϴ� ��ȣ�� �Է����ּ���(1~4������ ���ڿ�����) : ");
		scanf("%d", &n);
		if (n == 1) { // n = 1
			printf("���ϴ� ���ڸ� �Է����ּ���.\n");
			scanf("%d", &num);
			push(num);
		}
		else if (n == 2) { // n = 2
			pop();
		}
		else if (n == 3) print(); // n = 3
		else if (n == 4) break;// n = 4
		else printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n"); // n != 1, 2, 3, 4
	}
	return 0;
}
