#include<iostream>
using namespace std;
class CTest {
public:
	// CTest 클래스의 '생성자 함수' 선언 및 정의/
	CTest() {
		// 인스턴스가 생성되면 멤버 데이터를 '자동으로' 초기화한다. 
		m_nData = 10;
	}
	int m_nData;// 멤버 데이터 선언
	void PrintData() { //멤버 함수 선언 및 정의
		cout << m_nData << endl;
	}
};
// 사용자의 코드
int main() {
	CTest t; // 객체 선언 및 인스턴스 생성되면 생성자 함수 호출!!
	t.PrintData();
	return 0;
}
