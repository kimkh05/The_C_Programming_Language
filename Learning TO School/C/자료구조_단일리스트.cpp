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
}//head로 빈리스트 설정
void insert_node(headnode* L, int data) {
	listnode* newnode = (listnode*)malloc(sizeof(listnode));
	newnode->data = data;
	newnode->link = NULL;
	listnode* temp = L->head;
	listnode* pre = L->head;
	if (L->head == NULL) {//빈리스트일때
		L->head = newnode;
		return;
	}
	if (L->head->data > data) {//맨 처음에 삽입할 때(head 보다 작은 값)
		newnode->link = L->head;
		L->head = newnode;
		return;
	}
	while (temp->data < data) {
		if (temp->link == NULL) {//마지막에 삽입
			temp->link = newnode;
			return;
		}
		pre = temp;
		temp = pre->link; // temp = temp->link; 도 됨
	}
	//중간에 삽입
	newnode->link = pre->link;
	pre->link = newnode;
}
void delete_node(headnode* L, int data) {
	listnode* del = L->head;
	listnode* pre = L->head;
	if (del == NULL) {//빈 리스트
		printf("error\n");
		return;
	}
	if (L->head->data == data) {//첫 값이 삭제될 때
		L->head = L->head->link;
		return;
	}
	else {
		while (del->data != data) {
			pre = del;
			del = pre->link; // del = del->link; 도 됨
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
