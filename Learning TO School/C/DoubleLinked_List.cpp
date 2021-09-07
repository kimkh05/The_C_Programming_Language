#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int data;
	struct ListNode* llink, * rlink;
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
	newnode->llink = NULL;
	newnode->rlink = NULL;

	listnode* temp = L->head;
	listnode* pre = L->head;
	if (L->head == NULL) {//�󸮽�Ʈ�϶�
		L->head = newnode;
		newnode->llink = NULL;
		newnode->rlink = NULL;
		return;
	}
	if (L->head->data > data) {//�� �տ� ������ ��(head ���� ���� ��)
		newnode->llink = NULL;
		newnode->rlink = L->head;
		L->head->llink = newnode;
		L->head = newnode;
		return;
	}
	while (temp->data <= data) {
		if (temp->rlink == NULL) {//�������� ����
			newnode->llink = temp;
			newnode->rlink = NULL;
			temp->rlink = newnode;
			return;
		}
		pre = temp;
		temp = pre->rlink; // temp = temp->rlink; �� ��
	}
	//�߰��� ����
	newnode->rlink = pre->rlink;
	newnode->llink = pre;
	pre->rlink = newnode;
	newnode->rlink->llink = newnode;
}
void delete_node(headnode* L, int data) {
	listnode* del = L->head;

	if (del == NULL) {//�� ����Ʈ
		printf("error\n");
		return;
	}
	if (L->head->data == data) {//ù ���� ������ ��
		L->head = L->head->rlink;
		if (L->head != NULL) //����Ʈ�� ù ���� �����Ǿ �� ����Ʈ�� �ƴ� ��� ex) 0-1-2 ���� 0 ����
			L->head->llink = NULL;
		free(del);
		return;
	}
	while (del->data != data) {
		del = del->rlink;
		if (del == NULL) {//���������� ���µ��� ������ ���� �������� �ʴ� ���
			printf("���� ��尡 �����ϴ�..\n");
			return;
		}
	}
	del->llink->rlink = del->rlink; //del ��� ���� ��� ��ũ ����
	if (del->rlink != NULL) //del ��尡 ������ ����� ��� if�� ���� �ȵǵ��� ����
		del->rlink->llink = del->llink;
	free(del);
	return;
}

void print_node(headnode* L) {
	if (L->head == NULL)
		printf("empty list \n");
	else {
		printf("NULL<->");
		for (listnode* temp = L->head; temp != NULL; temp = temp->rlink)
			printf("%d<->", temp->data);
		printf("NULL \n");
	}
}

int main() {
	headnode* L = createlisthead();
	insert_node(L, 3);
	print_node(L);
	insert_node(L, 1);
	print_node(L);
	insert_node(L, 5);
	print_node(L);
	insert_node(L, 0);
	print_node(L);
	delete_node(L, 1);
	print_node(L);
	delete_node(L, 3);
	print_node(L);
	delete_node(L, 0);
	print_node(L);
	delete_node(L, 5);
	print_node(L);
}
