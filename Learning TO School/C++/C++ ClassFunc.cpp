#include<iostream>
using namespace std;
// 제작자 코드
class CTest {
public:
	// CTest 클래스의 '생성자 함수' 선언 및 정의
	CTest() {
		// 인스턴스가 생성되면 멤버 데이터를 '자동으로' 초기화 한다.
		cout << "CTest() : 생성자 함수" << endl;
		m_nData = 10;
	}
	// 멤버 데이터 선언
	int m_nData;
	// 멤버 함수 선언, 정의는 클래스 외부로 분리됨.
	void PrintData();
};
// 클래스 외부에 분리된 멤버 함수 정의
void CTest::PrintData() {
	// 멤버 데이터에 접근하고 값을 출력한다.
	cout << m_nData << endl;
}
// 사용자의 코드
int main() {
	CTest t;
	t.PrintData();
	return 0;
}
