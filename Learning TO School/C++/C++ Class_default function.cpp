#include<iostream>
using namespace std;
class CMyData {
	// �⺻ ���� ���� �����ڴ� 'private'�̴�
	int m_nData;
	double m_dData;
public:
	int GetData() {
		return m_nData;
	}
	void SetData(int nParm) {
		m_nData = nParm;
	}
	double GetDatad(){
		return m_dData;
	}
	void SetData(double nParm){
		m_dData = nParm;
	}
};
// ����� �ڵ� #1
int main() {
	CMyData data;
	data.SetData(10);
	cout << data.GetData() << endl;
	return 0;
} // ������ : 10
// ����� �ڵ� #2
//int main() {
//	CMyData data;
//	data.m_nData = 10; // ������ ����
//	data.SetData(10);
//	cout << data.GetData() << endl;
//	return 0;
//}
