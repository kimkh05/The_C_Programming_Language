#include<iostream>
using namespace std;
class CTest {
	int num;	
public:
	CTest(int n) : num(n) { // ������
		cout << "CTest::CTest()  << num << endl; // ������ ȣ�� Ȯ��
	}
	~CTest() {// �Ҹ���
		cout << "CTest::~CTest() " << endl; // �Ҹ��� ȣ�� Ȯ��
	}
};
int main() {
	cout << "Begin " << endl;
	CTest a;
	cout << "Before b" << endl;
	CTest b;
	cout << "End " << endl;
	return 0;
}
