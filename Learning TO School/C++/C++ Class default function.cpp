#include<iostream>
using namespace std;
class CMyData {
public:
	// 디폴트 생성자는 없다.
	// 매개변수가 int 하나인 생성자 함수 선언 및 정의
	CMyData(int nParam = 0) : m_nData(nParam) {};
	CMyData(int x, int y) : m_nData(x + y) {};
	int GetData() { return m_nData; }
private:
	int m_nData;
};
int main() {
	CMyData a;    // CMyData(int nParam) 호출
	CMyData b(10);    // CMyData(int nParam) 호출
	CMyData c(3, 4);  // CMyData(int x, int y) 호출

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
	cout << c.GetData() << endl;

	return 0;
}
