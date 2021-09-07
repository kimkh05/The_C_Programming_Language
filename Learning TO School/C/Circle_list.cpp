#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int data;
	struct ListNode* link;
}listnode;

typedef struct {
	listnode* head;
} headnode;

headnode* createlisthead(void) {
	headnode* L;
	L = (headnode*)malloc(sizeof(headnode));
	L->head = NULL;
	return L;
}//head�� �󸮽�Ʈ ����

void insert_node(headnode* L, int data) {
	listnode* newnode = (listnode*)malloc(sizeof(listnode));
	newnode->data = data;
	newnode->link = NULL;

	listnode* temp = L->head;
	listnode* pre = L->head;
	if (L->head == NULL) {//�󸮽�Ʈ�϶�
		L->head = newnode;
		newnode->link = L->head;
		return;
	}
	while (pre->link != L->head) {
		pre = temp;
		temp = pre->link; // temp = temp->link; �� ��
		if (temp->data > data && L->head->data < data)
			//�� �� �����ٴ� ũ���� ����Ʈ�� ������ �����ٴ� ���� ��, (�߰� ��)
			break;
	}
	newnode->link = pre->link;
	pre->link = newnode;
	if (newnode->link == L->head && L->head->data > newnode->data) //�� �� ���� �����ϴ� ����...�� ���� �ٲ��ּ��� ���� �ʹ� �������
		//�� �տ� ������ ���� head�� �ٲ���ߵ�!
		L->head = newnode;
}
void delete_node(headnode* L, int data) {//�����ؾߴ�//
	listnode* del = L->head;
	listnode* pre = L->head;

	if (del == NULL) {//�� ����Ʈ
		printf("error\n");
		return;
	}
	if (del->link == L->head) {//����Ʈ�� �� �� ���� ���� ��� - �ȵ�
		free(del);
		L->head = NULL;
		return;
	}
	del = del->link;
	while (del->data != data) {
		if (del == L->head) {//���� ���� ���� ���
			printf("������ ���� �����ϴ�.\n");
			return;
		}
		pre = del;
		del = pre->link; // del = del->link; �� ��
	}
	if (del == L->head) {//�� ó�� ��尡 ���� ����� ���
		pre->link = del->link;
		L->head = del->link;
		free(del);
		return;
	}
	pre->link = del->link;
	free(del);
	return;
}

void print_node(headnode* L) {
	if (L->head == NULL) {
		printf("empty list...\n");
	}
	else {
		printf("head->%d->", L->head->data);
		for (listnode* temp = L->head->link; temp != L->head; temp = temp->link)
			printf("%d->", temp->data);
		printf("head \n");
	}
}

int main() {
	headnode* L = createlisthead();
	insert_node(L, 5);
	print_node(L);
	insert_node(L, 7);
	print_node(L);
	insert_node(L, 1);
	print_node(L);
	delete_node(L, 5);
	print_node(L);
	delete_node(L, 1);
	print_node(L);
	delete_node(L, 7);
	print_node(L);
}
