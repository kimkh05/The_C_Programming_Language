#include<iostream>
#include<typeinfo>
#define ADD(a, b) ( (a) + (b) ) // ��ũ��
int Add(int a, int b) { // �Ϲ� �Լ� ( ���������� ������尡 �߻� ) 
	return a + b;
}
inline int AddNew(int a, int b) { // �ζ��� �Լ� : �Լ�ó�� ��������� �Լ��� �ƴϴ�.
	return a + b;
}
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << "ADD() : " << ADD(a, b) << std::endl; // �Լ�ȣ���̶� ���� ����.
	std::cout << "Add() : " << Add(a, b) << std::endl;
	std::cout << "AddNew() : " << AddNew(a, b) << std::endl;// �Լ�ȣ���̶� ���� ����.
	return 0;
}
