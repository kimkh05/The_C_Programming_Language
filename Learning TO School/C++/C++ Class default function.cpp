#include<iostream>
using namespace std;
class CMyData {
public:
	// ����Ʈ �����ڴ� ����.
	// �Ű������� int �ϳ��� ������ �Լ� ���� �� ����
	CMyData(int nParam = 0) : m_nData(nParam) {};
	CMyData(int x, int y) : m_nData(x + y) {};
	int GetData() { return m_nData; }
private:
	int m_nData;
};
int main() {
	CMyData a;    // CMyData(int nParam) ȣ��
	CMyData b(10);    // CMyData(int nParam) ȣ��
	CMyData c(3, 4);  // CMyData(int x, int y) ȣ��

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
	cout << c.GetData() << endl;

	return 0;
}
