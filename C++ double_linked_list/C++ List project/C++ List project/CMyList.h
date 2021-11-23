#pragma once
typedef struct Node {
	int data; // 노드 안에 있는 값
	Node* Llink; // 왼쪽
	Node* Rlink; // 오른쪽
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
	node* createnode(); // head 를 빈 노드로 가르키게 설정함
	void insert(node* head, int data);
	void firstInsert(node* head, int data);
	void lastInsert(node* head, int data);
private:
	node* head = nullptr;
	int length;
};
