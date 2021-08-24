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
	p->data = value; // ��� �������� ���� ���� 
	head = p; //��� ������ ���� 
	return head; // ����� ��� ������ ��ȯ 
}

// ��� pre �ڿ� ���ο� ��� ���� 
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
//pre�� ����Ű�� ����� ���� ��带 �����Ѵ�.
ListNode* delete(ListNode *head, ListNode *pre){
	ListNode *removed;
	removed = pre->link;
	pre->link = removed->link
	free(removed);
	return head;
} 
