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

CMylink::CMylink() // head�� �� ���� ����
{
	head = CMylink::createnode();
}

CMylink::~CMylink() // �Ҹ��� : �����ִ� ���� ����
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

void CMylink::insert(node* head, int data) // ����
{
	int n;
	cout << "��� �����ϰڽ��ϱ�?[���� ����Ʈ ���� : " << length << "] " << endl;
	cout << "1. ó���κ� ����" << endl;
	cout << "2. �������κ� ����" << endl;
	cin >> n;
	switch (n) {
	case 1:
		if (head->Rlink == NULL) break;
		firstInsert(head, data); // ó�� �����ϴ� �Լ� ȣ��
		cout << data << "ó���κ� ���� ����! " << endl;
		return;
		break;
	case 2: 
		if (head->Rlink == NULL) break;
		lastInsert(head, data); // ������ �����ϴ� �Լ� ȣ��
		cout << data << "�������κ� ���� ����! " << endl;
		return;
		break;
	default:
		cout << "�ٽ� �Է����ֽʽÿ�." << endl;
		insert(head, data);
		return;
		break;
	}
	node* newnode = new node;
	newnode->data = data;
	if (head->Rlink == NULL) { // ù ���� ������� ���
		head->Rlink = newnode;
		newnode->Llink = head;
		length++;
		return;
	}
	
}

void CMylink::firstInsert(node* head, int data) // ó�� ���� �Լ�
{
	node* newnode = new node;
	newnode->data = data;
	node* temp = head->Rlink;
	newnode = head->Rlink;
	newnode = temp->Llink;
	length++;
}

void CMylink::lastInsert(node* head, int data) // ������ ���� �Լ�/
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
