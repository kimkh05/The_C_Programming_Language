#include<iostream>
using namespace std;
class CTest{
private:
	int num;
public:
	CTest(int n) : num(n) { // ������
		cout << "CTest::CTest() " << num << endl; // ��ü �������� Ȯ��
	}
	~CTest() { // �Ҹ���
		cout << "CTest::~CTest() " << num << endl; // ��ü �Ҹ���� Ȯ��
	}
};
CTest one(1);
int main(){
	cout << "main �Լ� ����" << endl;
	CTest two(2); {
		CTest three(3);
	}
	cout << "main �Լ� ����" << endl;
	return 0;
}
