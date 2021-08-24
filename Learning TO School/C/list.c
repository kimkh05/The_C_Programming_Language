#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode{
	int data;
	struct ListNode* link;
}listnode;
typedef struct {
	listnode* head;
}headnode;
headnode* createlisthead(void){
	headnode* L;
	L = (headnode*) malloc(headnode);
	L->	head = NULL;
	return L;
}
ListNode* insert_first(ListNode*head, int value){
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));
	p->data = value; // 헤드 포인터의 값을 복사 
	head = p; //헤드 포인터 변경 
	return head; // 변경된 헤드 포인터 반환 
}

// 노드 pre 뒤에 새로운 노드 삽입 
ListNode* insert(ListNode *head, ListNode *pre, element value){
	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = pre->link;
	pre->link = p;
	return head;
}
ListNode* delete_first(ListNode *head){
	ListNode *removed;
	if(head == NULL) return NULL;
	removed = head;
	head = removed->link;
	free(removed);
	return head;
}
//pre가 가리키는 노드의 다음 노드를 삭제한다.
ListNode* delete(ListNode *head, ListNode *pre){
	ListNode *removed;
	removed = pre->link;
	pre->link = removed->link
	free(removed);
	return head;
} 
