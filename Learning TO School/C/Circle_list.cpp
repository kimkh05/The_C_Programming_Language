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
		newnode->link = L->head;
		return;
	}
	while (pre->link != L->head) {
		pre = temp;
		temp = pre->link; // temp = temp->link; 도 됨
		if (temp->data > data && L->head->data < data)
			//맨 앞 값보다는 크지만 리스트의 마지막 값보다는 작을 때, (중간 값)
			break;
	}
	newnode->link = pre->link;
	pre->link = newnode;
	if (newnode->link == L->head && L->head->data > newnode->data) //맨 앞 값을 구분하는 기준...좀 누가 바꿔주세요 조건 너무 어려워요
		//맨 앞에 삽입할 때는 head를 바꿔줘야됨!
		L->head = newnode;
}
void delete_node(headnode* L, int data) {//수정해야댐//
	listnode* del = L->head;
	listnode* pre = L->head;

	if (del == NULL) {//빈 리스트
		printf("error\n");
		return;
	}
	if (del->link == L->head) {//리스트에 한 개 값만 있을 경우 - 안됨
		free(del);
		L->head = NULL;
		return;
	}
	del = del->link;
	while (del->data != data) {
		if (del == L->head) {//삭제 값이 없는 경우
			printf("삭제할 값이 없습니다.\n");
			return;
		}
		pre = del;
		del = pre->link; // del = del->link; 도 됨
	}
	if (del == L->head) {//맨 처음 노드가 삭제 노드일 경우
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
