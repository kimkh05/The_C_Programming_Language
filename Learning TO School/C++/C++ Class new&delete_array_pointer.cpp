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
	CTest* pData[5];	// ��ü ������ ���� ( ��ü �����ƴ�!!)

	int i = 1;
	for (auto& n : pData)
		n = new CTest(i++); // ���⼭ �������� ��ü�� ����!!

	// delete �����ڸ� �̿��� ��ü�� ����
	// delete [] pData; �̰� �ƴ�!!!
	for (auto& n : pData)
		delete n;		// ��ü ������ ��ŭ ��ü�� ����!!

	cout << "End " << endl;
	return 0;
}
