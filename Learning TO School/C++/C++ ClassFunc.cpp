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
	// ��� �Լ� ����, ���Ǵ� Ŭ���� �ܺη� �и���.
	void PrintData();
};
// Ŭ���� �ܺο� �и��� ��� �Լ� ����
void CTest::PrintData() {
	// ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
	cout << m_nData << endl;
}
// ������� �ڵ�
int main() {
	CTest t;
	t.PrintData();
	return 0;
}
