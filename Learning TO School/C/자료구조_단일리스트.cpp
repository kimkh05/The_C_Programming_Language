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
		return;
	}
	if (L->head->data > data) {//�� ó���� ������ ��(head ���� ���� ��)
		newnode->link = L->head;
		L->head = newnode;
		return;
	}
	while (temp->data < data) {
		if (temp->link == NULL) {//�������� ����
			temp->link = newnode;
			return;
		}
		pre = temp;
		temp = pre->link; // temp = temp->link; �� ��
	}
	//�߰��� ����
	newnode->link = pre->link;
	pre->link = newnode;
}
void delete_node(headnode* L, int data) {
	listnode* del = L->head;
	listnode* pre = L->head;
	if (del == NULL) {//�� ����Ʈ
		printf("error\n");
		return;
	}
	if (L->head->data == data) {//ù ���� ������ ��
		L->head = L->head->link;
		return;
	}
	else {
		while (del->data != data) {
			pre = del;
			del = pre->link; // del = del->link; �� ��
		}
		pre->link = del->link;
		free(del);
		return;
	}
	return;
}

void print_node(headnode* L) {
	for (listnode* temp = L->head; temp != NULL; temp = temp->link)
		printf("%d->", temp->data);
	printf("NULL \n");
}

int main() {
	headnode* L = createlisthead();
	insert_node(L, 1);
	print_node(L);
	insert_node(L, 5);
	print_node(L);
	insert_node(L, 8);
	print_node(L);
	insert_node(L, 2);
	print_node(L);
	insert_node(L, 7);
	print_node(L);
	insert_node(L, 0);
	print_node(L);
	delete_node(L, 4);
	print_node(L);
	delete_node(L, 8);
	print_node(L);
	delete_node(L, 0);
	print_node(L);
	return 0; 
}
