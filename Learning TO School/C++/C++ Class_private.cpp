#include<iostream>
using namespace std;
class CMyData {
	// �⺻ ���� ���� �����ڴ� 'private'�̴�. 
	CMyData() {} // �����ڸ� private�� ����
	int m_nData;
public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};
//������ڵ�
int main() {
	CMyData data;
//������ �Լ��� private���� �����Ѵٸ� ����� �ڵ忡�� ���� ��ü�� �����ϴ� �����ε� ������ ������ �߻�
	return 0;
}
