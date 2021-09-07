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
}//head로 빈리스트 설정

void insert_node(headnode* L, int data) {
	listnode* newnode = (listnode*)malloc(sizeof(listnode));
	newnode->data = data;
	newnode->llink = NULL;
	newnode->rlink = NULL;

	listnode* temp = L->head;
	listnode* pre = L->head;
	if (L->head == NULL) {//빈리스트일때
		L->head = newnode;
		newnode->llink = NULL;
		newnode->rlink = NULL;
		return;
	}
	if (L->head->data > data) {//맨 앞에 삽입할 때(head 보다 작은 값)
		newnode->llink = NULL;
		newnode->rlink = L->head;
		L->head->llink = newnode;
		L->head = newnode;
		return;
	}
	while (temp->data <= data) {
		if (temp->rlink == NULL) {//마지막에 삽입
			newnode->llink = temp;
			newnode->rlink = NULL;
			temp->rlink = newnode;
			return;
		}
		pre = temp;
		temp = pre->rlink; // temp = temp->rlink; 도 됨
	}
	//중간에 삽입
	newnode->rlink = pre->rlink;
	newnode->llink = pre;
	pre->rlink = newnode;
	newnode->rlink->llink = newnode;
}
void delete_node(headnode* L, int data) {
	listnode* del = L->head;

	if (del == NULL) {//빈 리스트
		printf("error\n");
		return;
	}
	if (L->head->data == data) {//첫 값이 삭제될 때
		L->head = L->head->rlink;
		if (L->head != NULL) //리스트의 첫 값이 삭제되어도 빈 리스트가 아닐 경우 ex) 0-1-2 에서 0 삭제
			L->head->llink = NULL;
		free(del);
		return;
	}
	while (del->data != data) {
		del = del->rlink;
		if (del == NULL) {//마지막까지 갔는데도 삭제할 값이 존재하지 않는 경우
			printf("삭제 노드가 없습니다..\n");
			return;
		}
	}
	del->llink->rlink = del->rlink; //del 노드 왼쪽 노드 링크 연결
	if (del->rlink != NULL) //del 노드가 마지막 노드인 경우 if문 실행 안되도록 설정
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
