#include<iostream>
using namespace std;
class CTest {
	int m_nData; // ������� private���� ����
public:
	CTest(int nParam) :m_nData(nParam)		// �������ǵ� ������
	{
		cout << "CTest::CTest(int nParam) " << endl; // ������ ȣ�� Ȯ��
	}
	~CTest()	// �Ҹ���
	{
		// ��������� ���� �Բ� ����غ���.
		cout << "CTest::~CTest() " << m_nData << endl; // �Ҹ��� ȣ�� Ȯ��
	}
};
int main() {
	cout << "main �Լ� ����" << endl;
	CTest a(20);  // ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��(����Ʈ ������)
	cout << "Before b" << endl;
	CTest b(10); // ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��
	// CTest c; // ����Ʈ �����ڴ� �������� ���� �߻�!!
	cout << "main �Լ� ����" << endl;
	return 0;
}
