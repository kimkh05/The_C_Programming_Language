#include<iostream>
using namespace std;
// ������ �ڵ�
class CTest {
public:
	// ������ �Լ�
	CTest() { }
	// C++11 ���� ����� ���ÿ� ��� ������ �ʱ�ȭ �� �� �ִ�.
	int m_nData1 = 10;
	int m_nData2 = 20;
	// ��� �Լ� ���� �� ����
	void PrintData() {
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
