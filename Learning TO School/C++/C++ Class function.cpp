#include<iostream>
using namespace std;
class CTest {
public:
	// CTest Ŭ������ '������ �Լ�' ���� �� ����/
	CTest() {
		// �ν��Ͻ��� �����Ǹ� ��� �����͸� '�ڵ�����' �ʱ�ȭ�Ѵ�. 
		m_nData = 10;
	}
	int m_nData;// ��� ������ ����
	void PrintData() { //��� �Լ� ���� �� ����
		cout << m_nData << endl;
	}
};
// ������� �ڵ�
int main() {
	CTest t; // ��ü ���� �� �ν��Ͻ� �����Ǹ� ������ �Լ� ȣ��!!
	t.PrintData();
	return 0;
}
