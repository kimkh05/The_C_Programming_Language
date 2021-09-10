#include<iostream>
using namespace std;
class CMyData {
	// 기본 접근 제어 지시자는 'private'이다
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
// 사용자 코드 #1
int main() {
	CMyData data;
	data.SetData(10);
	cout << data.GetData() << endl;
	return 0;
} // 실행결과 : 10
// 사용자 코드 #2
//int main() {
//	CMyData data;
//	data.m_nData = 10; // 허용되지 않음
//	data.SetData(10);
//	cout << data.GetData() << endl;
//	return 0;
//}
