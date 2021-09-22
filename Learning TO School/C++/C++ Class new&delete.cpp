#include<iostream>
using namespace std; //2021.09.14
class CTest{
	int m_nData;
public:
	CTest() : m_nData(0) { // ����Ʈ ������
		// ������ ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
		cout << "CTest::CTest() " << m_nData << endl;
	}
	CTest(int nParam) :m_nData(nParam) { // ������(��������)
		// ������ ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
		cout << "CTest::CTest(int nParam) " << m_nData << endl;
	}
	~CTest() { // �Ҹ���
		// �Ҹ��� ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
		cout << "CTest::~CTest() " << m_nData << endl;
	}
};

int main() {
	cout << "Begin " << endl;

	// ��ü ���� ���� > �ν��Ͻ� ���� > ������ ȣ��(����Ʈ ������)
	CTest* p1 = new CTest;
	// ��ü ���� ���� > �ν��Ͻ� ���� > ������ ȣ��
	CTest* p2 = new CTest(10);
	// ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��(����Ʈ ������)
	CTest test;

	delete p1;	// delete �����ڸ� �̿��� ��ü�� ����
	cout << "--------------------------------" << endl;
	p1 = new CTest(20);	// ��ü ���� ���� > �ν��Ͻ� ���� > ������ ȣ��
	CTest b(30); // ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��
	cout << "--------------------------------" << endl;
	delete p1; // delete �����ڸ� �̿��� ��ü�� ����
	cout << "End " << endl;
	return 0;
}
