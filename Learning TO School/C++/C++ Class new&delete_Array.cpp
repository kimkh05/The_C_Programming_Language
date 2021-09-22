#include<iostream>
using namespace std;
class CTest
{
	int m_nData;
public:
	CTest() : m_nData(0)	// ����Ʈ ������
	{
		// ������ ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
		cout << "CTest::CTest() " << m_nData << endl;
	}
	CTest(int nParam) :m_nData(nParam) // ������(��������)
	{
		// ������ ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
		cout << "CTest::CTest(int nParam) " << m_nData << endl;
	}
	~CTest()	// �Ҹ���
	{
		// �Ҹ��� ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
		cout << "CTest::~CTest() " << m_nData << endl;
	}
};
int main() {
	cout << "Begin " << endl;
	// �迭�� new ������ ������ �� �ִ�.
	// ��ü ���� ���� > �ν��Ͻ� ���� > ������ ȣ��(����Ʈ ������)
	CTest* pData = new CTest[3];
	// ��ü ���� ���� > �ν��Ͻ� ���� > ������ ȣ��
	CTest* pData2 = new CTest[3]{ 10, 20, 30 };

	// �迭�� ������ ���� �ݵ�� �迭�� �����Ѵ�!
	delete[] pData;

	// ��ü ���� ���� > �ν��Ͻ� ���� > ������ ȣ��
	pData = new CTest(40);

	// delete �����ڸ� �̿��� ��ü�� ����
	delete pData;

	cout << "End " << endl;
	// �迭�� ������ ���� �ݵ�� �迭�� �����Ѵ�!
	delete[] pData2;
	return 0;
}
