#include<iostream>
using namespace std;
// ������ �ڵ�
class CTest {
public:
	// CTest Ŭ������ '������ �Լ�' ���� �� ����
	CTest() {
		// �ν��Ͻ��� �����Ǹ� ��� �����͸� '�ڵ�����' �ʱ�ȭ �Ѵ�.
		cout << "CTest() : ������ �Լ�" << endl;
		m_nData = 10;
	}

	// ��� ������ ����
	int m_nData;

	// ��� �Լ� ���� �� ����
	void PrintData() {
		// ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
		cout << m_nData << endl;
	}
};
// ������� �ڵ�
int main() {
	cout << "main() �Լ� ���� " << endl;
	CTest t; // ������ �Լ� ����
	t.PrintData();
	cout << "main() �Լ� �� " << endl;
	return 0;
}