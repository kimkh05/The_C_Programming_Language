#pragma once
typedef struct Node {
	int data; // ��� �ȿ� �ִ� ��
	Node* Llink; // ����
	Node* Rlink; // ������
}node;

class CMyList
{
protected:

public:
	CMyList();
	~CMyList();
private:
	
	
};

class CMylink:public CMyList{
protected:

public:
	CMylink();
	~CMylink();
	node* createnode(); // head �� �� ���� ����Ű�� ������
	void insert(node* head, int data);
	void firstInsert(node* head, int data);
	void lastInsert(node* head, int data);
private:
	node* head = nullptr;
	int length;
};
