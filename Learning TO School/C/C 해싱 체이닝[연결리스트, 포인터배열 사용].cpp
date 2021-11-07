#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode {
	int data;
	struct ListNode* link;
}listnode;

typedef struct {
	listnode* head;
}linked;

linked* arr[7];
#define arrSize 7

linked* createnode() {
	linked* L = (linked*)malloc(sizeof(linked));
	L->head = NULL;
	return L;
}

void insert(int num, linked* arr[]) { // n = 배열 크기
	int a;
	listnode* newnode = (listnode*)malloc(sizeof(listnode));
	newnode->data = num;
	newnode->link = NULL;
	a = newnode->data % arrSize;
	if (arr[a]->head == NULL) {
		arr[a]->head = newnode;
		newnode->link = NULL;
		return;
	}
	listnode* temp = arr[a]->head;
	listnode* pre = arr[a]->head;
	while (pre->link != NULL) {
		pre = temp;
		if (temp->link != NULL) temp = temp->link;
	}
	temp->link = newnode;
	newnode->link = NULL;
}
void print(linked* arr[]) {
	listnode* p;
	for (int i = 0; i < arrSize; i++) {
		printf("arr[%d] : ", i);
		p = arr[i]->head;
		while (p != NULL) {
			printf("%d", p->data);
			p = p->link;
			if (p != NULL) printf(" -> ");
		}
		printf("\n");
	}
}
int main() {
	int num;
	linked* arr[arrSize];
	for (int i = 0; i < arrSize; i++) {
		arr[i] = createnode();
	}
	printf("값을 입력하세요.\n");
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num);
		insert(num, arr);
	}
	print(arr);
}
// input :  */
