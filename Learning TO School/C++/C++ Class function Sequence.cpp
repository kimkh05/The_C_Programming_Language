#include<iostream>
using namespace std;
// ������ �ڵ�
class CTest {
public:
	// ������ �ʱ�ȭ ����� �̿��� ��� �ʱ�ȭ
	CTest() : m_nData1(10), m_nData2(20)
	{ }
	// �� ���� ��� ������ ����
	int m_nData1;
	int m_nData2;
	// ��� �Լ� ���� �� ����
	void PrintData() {
		// �� ���� ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};
// ������� �ڵ�
int main() {
	CTest t;
	t.PrintData();
	return 0;
}
