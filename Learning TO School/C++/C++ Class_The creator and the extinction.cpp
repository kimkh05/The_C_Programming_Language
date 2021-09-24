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

int main()
{
	cout << "Begin " << endl;
	CTest* pData[5];	// ��ü ������ �迭 ���� ( ��ü �����ƴ�!!)

	for (int i = 0; i < 5; i++)
		pData[i] = new CTest(2 * (i + 1)); //  ��ü ���� ���� �� �ʱ�ȭ

	// delete �����ڸ� �̿��� ��ü�� ����
	// delete [] pData; �̰� �ƴ�!!!
	for (int i = 0; i < 5; i++)
		delete pData[i]; //  �迭�� �������� ������ ��ü���� �����ؾ���!

	cout << "End " << endl;
	return 0;
}
