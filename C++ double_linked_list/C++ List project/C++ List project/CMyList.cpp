#define _CRT_SECURE_NO_WARNINGS
#include "CMyList.h"
#include<iostream>
using namespace std;

CMyList::CMyList()
{
}

CMyList::~CMyList()
{
}

CMylink::CMylink() // head를 빈 노드로 설정
{
	head = CMylink::createnode();
}

CMylink::~CMylink() // 소멸자 : 남아있는 노드들 삭제
{
	node* delnode = head;
	while (delnode->Rlink != NULL) {
		delnode->Llink = NULL;
		delete delnode;
		delnode = delnode->Rlink;
		delnode->Llink->Rlink == NULL;
	}
}

node* CMylink::createnode()
{
	length = 0;
	head->Llink = NULL;
	head->Rlink = NULL;
	return head;
}

void CMylink::insert(node* head, int data) // 삽입
{
	int n;
	cout << "어디에 삽입하겠습니까?[지금 리스트 길이 : " << length << "] " << endl;
	cout << "1. 처음부분 삽입" << endl;
	cout << "2. 마지막부분 삽입" << endl;
	cin >> n;
	switch (n) {
	case 1:
		if (head->Rlink == NULL) break;
		firstInsert(head, data); // 처음 삽입하는 함수 호출
		cout << data << "처음부분 삽입 성공! " << endl;
		return;
		break;
	case 2: 
		if (head->Rlink == NULL) break;
		lastInsert(head, data); // 마지막 삽입하는 함수 호출
		cout << data << "마지막부분 삽입 성공! " << endl;
		return;
		break;
	default:
		cout << "다시 입력해주십시오." << endl;
		insert(head, data);
		return;
		break;
	}
	node* newnode = new node;
	newnode->data = data;
	if (head->Rlink == NULL) { // 첫 값이 비어있을 경우
		head->Rlink = newnode;
		newnode->Llink = head;
		length++;
		return;
	}
	
}

void CMylink::firstInsert(node* head, int data) // 처음 삽입 함수
{
	node* newnode = new node;
	newnode->data = data;
	node* temp = head->Rlink;
	newnode = head->Rlink;
	newnode = temp->Llink;
	length++;
}

void CMylink::lastInsert(node* head, int data) // 마지막 삽입 함수/
{
	node* temp = head;
	node* pre = head;
	node* newnode = new node;
	newnode->data = data;
	while (temp->Rlink != NULL) {
		temp = temp->Rlink;
	}
	temp->Rlink = newnode;
	newnode->Llink = temp->Llink;
	length++;
}
